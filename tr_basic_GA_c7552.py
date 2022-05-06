import random
import pygad
import numpy as np
from cffi import FFI


def are_solutions_different(sol1, sol2):
    for i in range(len(sol1)):
        if sol1[i] != sol2[i]:
            print("Yes!")


def get_fitness_weights(count_list, n):
    weights = [0]*len(count_list)

    for i, x in enumerate(count_list):
        if x >= n:
            weights[i] = (n - x) / n
        else:
            weight = (n - x) / n
            weights[i] = weight
    return weights


def get_coverage():
    global rare_node_activation_counts, expected_rare_node_triggered_instances
    fully_covered = 0
    near_fully_covered = 0
    partially_covered = 0
    uncovered = 0
    for i, x in enumerate(rare_node_activation_counts):
        if x >= expected_rare_node_triggered_instances:
            fully_covered += 1
        elif x > int(expected_rare_node_triggered_instances * .8):
            near_fully_covered += 1
        elif x > 0:
            partially_covered += 1
        else:
            uncovered += 1
    return fully_covered, near_fully_covered, partially_covered, uncovered


def clear_on_each_gen():
    global candidate_solution_idx, fitness_values_per_gen, candidate_solutions, internal_node_states_per_gen
    # clear lists
    internal_node_states_per_gen = []
    fitness_values_per_gen = []
    candidate_solutions = []
    candidate_solution_idx = []


def get_archive_candidate_solutions():
    global candidate_solution_idx, fitness_values_per_gen, candidate_solutions, internal_node_states_per_gen, archive_candidate_per_gen
    candidate_internal_node_states = []
    fitness_values_per_gen = np.asarray(fitness_values_per_gen)
    candidate_solution_idx = np.argpartition(fitness_values_per_gen, -archive_candidate_per_gen)[-archive_candidate_per_gen:]
    candidate_solutions = [candidate_solutions[i] for i in candidate_solution_idx]
    candidate_internal_node_states = [internal_node_states_per_gen[i] for i in candidate_solution_idx]

    return candidate_solutions, candidate_internal_node_states


def should_add_to_archive_nonduplicate(node_states):
    global archive_solutions, archive_node_states, rare_node_idx, rare_value
    count = 0
    for x in archive_node_states:
        unique_count = 0
        # are_solutions_different(x, node_states)
        for i, idx in enumerate(rare_node_idx):
            if node_states[idx] != x[idx]:
                if node_states[idx] == rare_value[i]:
                    unique_count += 1
        if unique_count != 0:
            count += 1
    if count == len(archive_solutions):
        # print("Non Duplicate Solution!")
        return True
    else:
        # print("Duplicate Solution!")
        return False


def update_count(node_states):
    global rare_node_idx, rare_value, rare_node_activation_counts
    for i, x in enumerate(rare_node_idx):
        if node_states[x] == rare_value[i]:
            rare_node_activation_counts[i] += 1


def update_archive():
    global archive_solutions, archive_node_states
    solutions, solution_node_states = get_archive_candidate_solutions()
    for i, x in enumerate(solutions):
        status = should_add_to_archive_nonduplicate(solution_node_states[i])
        if status:
            archive_solutions.append(x)
            archive_node_states.append(solution_node_states[i])
            update_count(solution_node_states[i])


def update_weights():
    global rare_node_fitness_weights, rare_node_activation_counts, expected_rare_node_triggered_instances
    rare_node_fitness_weights = get_fitness_weights(rare_node_activation_counts, expected_rare_node_triggered_instances)


def on_generation(ga):
    print(f"On Generation: {ga.generations_completed}")
    update_archive()
    clear_on_each_gen()
    update_weights()
    full, near_full, partial, uncov = get_coverage()

    print(f" Rare Node Coverage in {len(archive_solutions)} Archived test cases")
    print(f"Fully covered: {full}")
    print(f"More than 80% Covered: {near_full}")
    print(f"Partially Covered: {partial}")
    print(f"Uncovered: {uncov}")


def fitness_func(solution, solution_idx):
    # write here
    fitness = 0
    boolean_solution = []
    for i, x in enumerate(solution):
        if x == 0:
            boolean_solution.append(False)
        else:
            boolean_solution.append(True)
    # get all node activations
    in_arr = np.array(boolean_solution, dtype=np.bool8)
    c_lib.c7552LoadInput(ffi.cast("bool *", in_arr.ctypes.data), len(in_arr))
    c_lib.c7552Propagate()
    node_activations = np.zeros(number_of_internal_nodes, dtype=np.bool8)
    c_lib.c7552GetNodeState(ffi.cast("bool *", node_activations.ctypes.data), len(node_activations))

    # Calculate fitness value
    for i, x in enumerate(rare_node_idx):
        if rare_value[i] == node_activations[rare_node_idx[i]]:
            fitness += rare_node_fitness_weights[i]

    internal_node_states_per_gen.append(node_activations)
    fitness_values_per_gen.append(fitness)
    candidate_solutions.append(boolean_solution)

    return fitness

### pygad documentation is very useful:
#### https://pygad.readthedocs.io/en/latest/README_pygad_ReadTheDocs.html#initialize-population

# steps:
# initialize : circuit, threshold, GA parameters
# Calculate: identify rare nodes and rare values
# Design fitness function: fitness calculation, adaptive fitness, archive implementation
# run GA


# Initialization Start
# Function Definition of C Function
dllURI = "./cffi_driver.so"
funDef = """unsigned int c880Init();
            void c880Delete();
            unsigned int c880NumInput();
            unsigned int c880NumOutput();
            unsigned int c880NumWire();
            void c880LoadInput(bool *in, int len);
            void c880Propagate();
            void c880GetOutput(bool *out, int len);
            void c880GetNodeState(bool *out, int len);
            void c880GetTransitionProbability(float *out, int len);
            void c880GetP0(float *out, int len);
            void c880GetP1(float *out, int len);
            int c880GetFitnessValue(float theta);
            
            unsigned int c2670Init();
            void c2670Delete();
            unsigned int c2670NumInput();
            unsigned int c2670NumOutput();
            unsigned int c2670NumWire();
            void c2670LoadInput(bool *in, int len);
            void c2670Propagate();
            void c2670GetOutput(bool *out, int len);
            void c2670GetNodeState(bool *out, int len);
            void c2670GetTransitionProbability(float *out, int len);
            void c2670GetP0(float *out, int len);
            void c2670GetP1(float *out, int len);
            int c2670GetFitnessValue(float theta);

            unsigned int c3540Init();
            void c3540Delete();
            unsigned int c3540NumInput();
            unsigned int c3540NumOutput();
            unsigned int c3540NumWire();
            void c3540LoadInput(bool *in, int len);
            void c3540Propagate();
            void c3540GetOutput(bool *out, int len);
            void c3540GetNodeState(bool *out, int len);
            void c3540GetTransitionProbability(float *out, int len);
            void c3540GetP0(float *out, int len);
            void c3540GetP1(float *out, int len);
            int c3540GetFitnessValue(float theta);

            unsigned int c5315Init();
            void c5315Delete();
            unsigned int c5315NumInput();
            unsigned int c5315NumOutput();
            unsigned int c5315NumWire();
            void c5315LoadInput(bool *in, int len);
            void c5315Propagate();
            void c5315GetOutput(bool *out, int len);
            void c5315GetNodeState(bool *out, int len);
            void c5315GetTransitionProbability(float *out, int len);
            void c5315GetP0(float *out, int len);
            void c5315GetP1(float *out, int len);
            int c5315GetFitnessValue(float theta);

            unsigned int c7552Init();
            void c7552Delete();
            unsigned int c7552NumInput();
            unsigned int c7552NumOutput();
            unsigned int c7552NumWire();
            void c7552LoadInput(bool *in, int len);
            void c7552Propagate();
            void c7552GetOutput(bool *out, int len);
            void c7552GetNodeState(bool *out, int len);
            void c7552GetTransitionProbability(float *out, int len);
            void c7552GetP0(float *out, int len);
            void c7552GetP1(float *out, int len);
            int c7552GetFitnessValue(float theta);"""

# Instantiate FFI
ffi = FFI()
c_lib = ffi.dlopen(dllURI)
ffi.cdef(funDef)

# Use FFI
c_lib.c7552Init()
c7552_n_input = c_lib.c7552NumInput()
c7552_n_output = c_lib.c7552NumOutput()
c7552_n_wire = c_lib.c7552NumWire()

c7552_trans_prob = np.zeros(c7552_n_wire, dtype=np.float32)
c_lib.c7552GetTransitionProbability(ffi.cast("float *", c7552_trans_prob.ctypes.data), len(c7552_trans_prob))

c7552_P0 = np.zeros(c7552_n_wire, dtype=np.float32)
c_lib.c7552GetP0(ffi.cast("float *", c7552_P0.ctypes.data), len(c7552_P0))

c7552_P1 = np.zeros(c7552_n_wire, dtype=np.float32)
c_lib.c7552GetP1(ffi.cast("float *", c7552_P1.ctypes.data), len(c7552_P1))

number_of_inputs = c7552_n_input
number_of_outputs = c7552_n_output
number_of_internal_nodes = c7552_n_wire

transition_prob = c7552_trans_prob
trigger_false_prob = c7552_P0
trigger_true_prob = c7552_P1
rarity_threshold_theta = 0.1
expected_rare_node_triggered_instances = 10
archive_candidate_per_gen = 10

# GA params
# genes: number of input nodes,
# chromosomes: number of pop size,
number_of_genes = number_of_inputs
number_of_initial_chromosomes = 50
fitness_function = fitness_func
num_generations = 10
num_parents_mating = 4
gene_type = int  # vector
run_GA_n_times = 100

# Parent selection options: sss, rws, sus, rank, random, tournament
parent_selection_type = "random"
# In case of TOURNAMENT selection
#K_tournament = 2

# -1 means keep all parents, 0 is keep None, n is keep n
keep_parents = 0
# Crossover Options single_point, two_points, uniform, scattered
crossover_type = "two_points"
# Mutation options: random, swap, adaptive, inversion etc.
mutation_type = "random"
mutation_num_genes = int(number_of_inputs * 0.3)  # 33%
# Specify valid gene values
gene_space = [0, 1]
# Initialization finish

# Calculate: identify rare nodes and rare values
# rare_node_idx: which ids are rare nodes in total nodes
# rare_node_value: which state(true/false) is the rare value of the rare node
rare_node_idx = []
rare_value = []  # follows sequence in rare_node_idx
for i, x in enumerate(transition_prob):
    if x < rarity_threshold_theta:
        rare_node_idx.append(i)
        if trigger_true_prob[i] <= trigger_false_prob[i]:
            rare_value.append(True)
        else:
            rare_value.append(False)
        # print(f"Rare node idx {i} has prob {transition_prob[i]}")
print(f"Number of Rare nodes: {len(rare_node_idx)}")
# print(rare_value)
# for i in range(0, len(rare_node_idx)):
#     print(f"For rare node {rare_node_idx[i]} rare value is {rare_value[i]}")

# Design fitness function: fitness calculation, adaptive fitness, archive implementation
num_of_rare_nodes = len(rare_node_idx)

# Archive: To be implemented
archive_solutions = []
archive_node_states = []
internal_node_states_per_gen = []
fitness_values_per_gen = []
candidate_solutions = []
candidate_solution_idx = []

# Adaptive fitness: calculating weights
rare_node_activation_counts = [0]*num_of_rare_nodes
rare_node_fitness_weights = get_fitness_weights(rare_node_activation_counts, expected_rare_node_triggered_instances)


def run_ga():
    retry = run_GA_n_times
    while retry > 0:
        function_inputs = []
        # random initialization
        for i in range(number_of_initial_chromosomes):
            function_inputs.append(np.random.randint(2, size=number_of_genes))
        function_inputs = np.asarray(function_inputs)
        ga_instance = pygad.GA(num_generations=num_generations,
                               num_parents_mating=num_parents_mating,
                               fitness_func=fitness_function,
                               initial_population=function_inputs,
                               parent_selection_type=parent_selection_type,
                               # K_tournament=K_tournament,
                               keep_parents=keep_parents,
                               crossover_type=crossover_type,
                               mutation_type=mutation_type,
                               mutation_num_genes=mutation_num_genes,
                               gene_space=gene_space,
                               on_generation=on_generation)
        ga_instance.run()
        retry -= 1

run_ga()
full, near_full, partial, uncov = get_coverage()

print(f" Rare Node Coverage in {len(archive_solutions)} Archived test cases")
print(f"Fully covered: {full}")
print(f"More than 80% Covered: {near_full}")
print(f"Partially Covered: {partial}")
print(f"Uncovered: {uncov}")


# solution, solution_fitness, solution_idx = ga_instance.best_solution()
# # print("Parameters of the best solution : {solution}".format(solution=solution))
# print("Fitness value of the best solution = {solution_fitness}".format(solution_fitness=solution_fitness))


# ga_instance.plot_fitness(plot_type="scatter")
# # ga_instance.plot_new_solution_rate()
# # ga_instance.plot_genes(graph_type="plot",
# #                        plot_type="scatter",
# #                        solutions='all')


