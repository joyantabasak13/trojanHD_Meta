#include <iostream>
#include <math.h>
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
    std::vector<float> out_vector;
    for(auto x:wire_map) {
        float pt = x.second->p0 * x.second->p1; // Transition probability, pt = p0*p1;
        out_vector.push_back(pt);
    }
    return out_vector;
}

std::vector<float> component::getP0() {
    std::vector<float> out_vector;
    for(auto x:wire_map) {
        out_vector.push_back(x.second->p0);
    }
    return out_vector;
}

std::vector<float> component::getP1() {
    std::vector<float> out_vector;
    for(auto x:wire_map) {
        out_vector.push_back(x.second->p1);
    }
    return out_vector;
}

int component::getFitnessValue(float theta) {
    int count = 0;
    for(auto x:wire_map) {
        float p0 = x.second->p0;
        float p1 = x.second->p1;
        float pt = p0*p1;
        if(pt < theta) {
            if((p1 < p0 && x.second->state==1) || (p0 < p1 && x.second->state==0)) {
                count++;
            }
        }
    }
    return count;
}