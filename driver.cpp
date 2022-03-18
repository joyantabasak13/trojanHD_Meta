#include <iostream>
#include <vector>

using namespace std;

// #include "c880.h"
// #include "c2670.h"
// #include "c3540.h"
// #include "c5315.h"
#include "c7552.h"

int main() {
    c7552 IC;
    std::vector<bool> test_vector;
    for(size_t i=0; i<IC.n_input; i++) {
        test_vector.push_back(i%2);
    }

    IC.loadInput(test_vector);
    IC.propagate();
    std::vector<bool> output = IC.getOutput();
    std::vector<bool> node_state = IC.getNodeState();

    for(auto i:output) {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    for(auto i:node_state) {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    return 0;
}
