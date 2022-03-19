#include <vector>
#include "c7552.h"

extern "C" int getFitnessValue(bool arr[], int n, float theta) {
    std::vector<bool> test_vector(arr, arr+n);
    c7552 IC;
    IC.loadInput(test_vector);
    IC.propagate();
    return IC.getFitnessValue(theta);
}