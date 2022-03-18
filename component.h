#ifndef CKTCOMPONENT_H
#define CKTCOMPONENT_H

#include <map>
#include <vector>
#include <string>

struct input {
    bool state;
    float p0, p1;
};

struct output {
    bool state;
    float p0, p1;
};

struct wire {
    bool state;
    float p0, p1;
};

typedef struct input input;
typedef struct output output;
typedef struct wire wire;

class component {
public:
    std::map<std::string, input*> in_map; 
    std::map<std::string, output*> out_map; 
    std::map<std::string, wire*> wire_map;

    int n_input, n_output, n_wire;

    component();
    ~component();
    void loadInput(std::vector<bool>);
    std::vector<bool> getOutput();
    std::vector<bool> getNodeState();
    std::vector<float> getTransitionProbability();
    virtual void propagate() = 0;
    virtual void calculateTransitionProbability() = 0;
};

#endif