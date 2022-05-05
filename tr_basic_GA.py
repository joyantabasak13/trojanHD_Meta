import random

import pygad
import numpy as np

np.random.seed(0)


def on_generation(ga):
    # print("Generation", ga.generations_completed)
    # print(ga.population)
    solution, solution_fitness, solution_idx = ga.best_solution()
    print(f"Best solution in generation {ga.generations_completed} is {solution_fitness}")
    global best_fitness_value, best_fitness_solution
    if solution_fitness > best_fitness_value:
        best_fitness_value = solution_fitness
        best_fitness_solution = solution


def fitness_func(solution, solution_idx):
    # write here
    fitness = 0
<<<<<<< HEAD
    # get all node activations
    # node_activation = get_activations(solution)
    node_activations = np.random.randint(2, size=number_of_internal_nodes)
    for i, x in enumerate(rare_node_idx):
        if rare_value[i] == node_activations[rare_node_idx[i]]:
            fitness += rare_node_fitness_weights[i]
=======
>>>>>>> cce94eefb82d87482271230a513fa78e75eb7e31
    return fitness

### pygad documentation is very useful:
#### https://pygad.readthedocs.io/en/latest/README_pygad_ReadTheDocs.html#initialize-population

# steps:
# initialize : circuit, threshold, GA parameters
# Calculate: identify rare nodes and rare values
# Design fitness function: fitness calculation, adaptive fitness, archive implementation
# run GA


# Initialization Start
# Circuit and threshold init:
# total_node_num: number of all nodes,
# transition_val: transition value of each node; a (total_node_num - inputs) sized list
total_number_of_nodes = 300
number_of_inputs = 100
number_of_internal_nodes = total_number_of_nodes - number_of_inputs
transition_val_list_triggered = np.random.normal(.5, .4, number_of_internal_nodes)  # triggered means 1
rarity_threshold = 0.1
expected_rare_node_triggered_instances = 10

# GA params
# genes: number of input nodes,
# chromosomes: number of pop size,
number_of_genes = number_of_inputs
number_of_initial_chromosomes = 50
fitness_function = fitness_func
num_generations = 10
num_parents_mating = 2
gene_type = int  # vector

# params necessary ONLY IF initial population is NOT manually generated
# num_genes = number_of_genes
# sol_per_pop = 8
# init_range_low = -2
# init_range_high = 5

# Parent selection options: sss, rws, sus, rank, random, tournament
parent_selection_type = "tournament"
# In case of TOURNAMENT selection
K_tournament = 2

# -1 means keep all parents, 0 is keep None, n is keep n
keep_parents = 0
# Crossover Options single_point, two_points, uniform, scattered
crossover_type = "two_points"
# Mutation options: random, swap, adaptive, inversion etc.
mutation_type = "random"
mutation_num_genes = number_of_inputs // 5  # 20%
# Specify valid gene valuess
gene_space = [0, 1]
# Initialization finish

# Calculate: identify rare nodes and rare values
# rare_node_idx: which ids are rare nodes in total nodes
# rare_node_value: which state(true/false) is the rare value of the rare node
rare_node_idx = []
rare_value = []  # follows sequence in rare_node_idx
for i, x in enumerate(transition_val_list_triggered):
    if x < rarity_threshold:
        rare_node_idx.append(i)
        rare_value.append(1)
    elif x > 1 - rarity_threshold:
        rare_node_idx.append(i)
        rare_value.append(0)
print(f"Number of Rare nodes: {len(rare_node_idx)}")
# for i in range(0, len(rare_node_idx)):
#     print(f"For rare node {rare_node_idx[i]} rare value is {rare_value[i]}")

# Design fitness function: fitness calculation, adaptive fitness, archive implementation
num_of_rare_nodes = len(rare_node_idx)

# Archive: To be implemented
archive = []
rare_node_activation_counts = [0]*num_of_rare_nodes

# Adaptive fitness: calculating weights
rare_node_fitness_weights = [0]*num_of_rare_nodes
N = expected_rare_node_triggered_instances
for i, x in enumerate(rare_node_activation_counts):
    if x >= N:
        rare_node_fitness_weights[i] = 0
    else:
        weight = (N - x) / N
        rare_node_fitness_weights[i] = weight

# fitness function implementation
function_inputs = []
# random initialization
for i in range(number_of_initial_chromosomes):
    function_inputs.append(np.random.randint(2, size=number_of_genes))
function_inputs = np.asarray(function_inputs)

# for sol in function_inputs:
#     print(fitness_function(sol, sol))

best_fitness_value = 0
best_fitness_solution = []
best_fitness_solution = np.asarray(best_fitness_solution)

ga_instance = pygad.GA(num_generations=num_generations,
                       num_parents_mating=num_parents_mating,
                       fitness_func=fitness_function,
                       initial_population=function_inputs,
                       parent_selection_type=parent_selection_type,
                       K_tournament=K_tournament,
                       keep_parents=keep_parents,
                       crossover_type=crossover_type,
                       mutation_type=mutation_type,
                       mutation_num_genes=mutation_num_genes,
                       gene_space=gene_space,
                       on_generation=on_generation)
ga_instance.run()

solution, solution_fitness, solution_idx = ga_instance.best_solution()
# print("Parameters of the best solution : {solution}".format(solution=solution))
print("Fitness value of the best solution = {solution_fitness}".format(solution_fitness=solution_fitness))

print(f"Global best fitness {best_fitness_value}")
ga_instance.plot_fitness(plot_type="scatter")
# # ga_instance.plot_new_solution_rate()
# # ga_instance.plot_genes(graph_type="plot",
# #                        plot_type="scatter",
# #                        solutions='all')
