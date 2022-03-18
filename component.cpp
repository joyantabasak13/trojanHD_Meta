#include <iostream>
#include "component.h"

component::component() {}

component::~component() {}

void component::loadInput(std::vector<bool> in_vector) {
    if(in_vector.size() != n_input) {
        std::cout<<"Invalid input vector size"<<std::endl;
        exit(-1);
    }
    size_t i=0;
    for(auto x:in_map) {
        x.second->state = in_vector[i++];
    }
}

std::vector<bool> component::getOutput() {
    std::vector<bool> out_vector;
    for(auto x:out_map) {
        out_vector.push_back(x.second->state);
    }
    return out_vector;
}

std::vector<bool> component::getNodeState() {
    std::vector<bool> out_vector;
    for(auto x:wire_map) {
        out_vector.push_back(x.second->state);
    }
    return out_vector;
}

std::vector<float> component::getTransitionProbability() {
    /********** Initialize p0 and p1 for input with 0.5 **********/
    for(auto x:in_map) {
        x.second->p0 = 0.5;
        x.second->p1 = 0.5;
    }

    calculateTransitionProbability();

    std::vector<float> out_vector;
    for(auto x:wire_map) {
        float pt = x.second->p0 * x.second->p1; // Transition probability, pt = p0*p1;
        out_vector.push_back(pt);
    }
    return out_vector;
}