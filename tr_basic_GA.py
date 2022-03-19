import random

import pygad
import numpy as np

### pygad documentation is very useful:
#### https://pygad.readthedocs.io/en/latest/README_pygad_ReadTheDocs.html#initialize-population

# assumed prior
number_of_genes = 100
number_of_initial_chromosomes = 2
np.random.seed(0)
# uniform distribution
fitness_vector = np.random.normal(.5, .2, 100)
print(fitness_vector)
function_inputs = []
for i in range(number_of_initial_chromosomes):
    function_inputs.append(np.random.randint(2, size=100))
function_inputs = np.asarray(function_inputs)
print(function_inputs)


def fitness_func(solution, solution_idx):
    # write here
    fitness = 0
    return fitness


def on_generation(ga):
    # print("Generation", ga.generations_completed)
    # print(ga.population)
    solution, solution_fitness, solution_idx = ga.best_solution()
    print(solution_fitness)


for sol in function_inputs:
    print(fitness_func(sol, sol))

# GA params
fitness_function = fitness_func

num_generations = 100
num_parents_mating = 2
gene_type = int
# params not necessary if initial population is manually generated
# num_genes = number_of_genes # useless if there is already initial population
# sol_per_pop = 8 # useless if there is already initial population
# init_range_low = -2
# init_range_high = 5

# Many parent selection options:
parent_selection_type = "sss"
# Tournament size
# K_tournament = 2
# -1 means keep all, 0 is keep None, n is keep n
keep_parents = 0
# Options single point, two_point, uniform, scattered
crossover_type = "scattered"
# Options: random, swap, adaptive, invertion etc.
mutation_type = "random"
mutation_num_genes = 80
# Specify valid gene valuess
gene_space = [0, 1]

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

solution, solution_fitness, solution_idx = ga_instance.best_solution()
print("Parameters of the best solution : {solution}".format(solution=solution))
print("Fitness value of the best solution = {solution_fitness}".format(solution_fitness=solution_fitness))

ga_instance.plot_fitness(plot_type="scatter")
# ga_instance.plot_new_solution_rate()
# ga_instance.plot_genes(graph_type="plot",
#                        plot_type="scatter",
#                        solutions='all')
