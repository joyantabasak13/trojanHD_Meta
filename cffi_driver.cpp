#include "cffi_driver.h"
#include <vector>

c880* IC_c880;

unsigned int c880Init() {
    IC_c880 = new c880();
    return 0;
}

void c880Delete() {
    delete IC_c880;
}

unsigned int c880NumInput() {
    return IC_c880->n_input;
}

unsigned int c880NumOutput() {
    return IC_c880->n_output;
}

unsigned int c880NumWire() {
    return IC_c880->n_wire;
}

void c880LoadInput(bool *in, int len) {
    std::vector<bool> in_vector(in, in + len);
    IC_c880->loadInput(in_vector);
}

void c880Propagate() {
    IC_c880->propagate();
}

void c880GetOutput(bool *out, int len) {
    std::vector<bool> out_vector = IC_c880->getOutput();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c880GetNodeState(bool *out, int len) {
    std::vector<bool> out_vector = IC_c880->getNodeState();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c880GetTransitionProbability(float *out, int len) {
    std::vector<float> out_vector = IC_c880->getTransitionProbability();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c880GetP0(float *out, int len) {
    std::vector<float> out_vector = IC_c880->getP0();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c880GetP1(float *out, int len) {
    std::vector<float> out_vector = IC_c880->getP1();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

int c880GetFitnessValue(float theta) {
    return IC_c880->getFitnessValue(theta);
}

c2670* IC_c2670;

unsigned int c2670Init() {
    IC_c2670 = new c2670();
    return 0;
}

void c2670Delete() {
    delete IC_c2670;
}

unsigned int c2670NumInput() {
    return IC_c2670->n_input;
}

unsigned int c2670NumOutput() {
    return IC_c2670->n_output;
}

unsigned int c2670NumWire() {
    return IC_c2670->n_wire;
}

void c2670LoadInput(bool *in, int len) {
    std::vector<bool> in_vector(in, in + len);
    IC_c2670->loadInput(in_vector);
}

void c2670Propagate() {
    IC_c2670->propagate();
}

void c2670GetOutput(bool *out, int len) {
    std::vector<bool> out_vector = IC_c2670->getOutput();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c2670GetNodeState(bool *out, int len) {
    std::vector<bool> out_vector = IC_c2670->getNodeState();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c2670GetTransitionProbability(float *out, int len) {
    std::vector<float> out_vector = IC_c2670->getTransitionProbability();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c2670GetP0(float *out, int len) {
    std::vector<float> out_vector = IC_c2670->getP0();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c2670GetP1(float *out, int len) {
    std::vector<float> out_vector = IC_c2670->getP1();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

int c2670GetFitnessValue(float theta) {
    return IC_c2670->getFitnessValue(theta);
}

c3540* IC_c3540;

unsigned int c3540Init() {
    IC_c3540 = new c3540();
    return 0;
}

void c3540Delete() {
    delete IC_c3540;
}

unsigned int c3540NumInput() {
    return IC_c3540->n_input;
}

unsigned int c3540NumOutput() {
    return IC_c3540->n_output;
}

unsigned int c3540NumWire() {
    return IC_c3540->n_wire;
}

void c3540LoadInput(bool *in, int len) {
    std::vector<bool> in_vector(in, in + len);
    IC_c3540->loadInput(in_vector);
}

void c3540Propagate() {
    IC_c3540->propagate();
}

void c3540GetOutput(bool *out, int len) {
    std::vector<bool> out_vector = IC_c3540->getOutput();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c3540GetNodeState(bool *out, int len) {
    std::vector<bool> out_vector = IC_c3540->getNodeState();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c3540GetTransitionProbability(float *out, int len) {
    std::vector<float> out_vector = IC_c3540->getTransitionProbability();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c3540GetP0(float *out, int len) {
    std::vector<float> out_vector = IC_c3540->getP0();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c3540GetP1(float *out, int len) {
    std::vector<float> out_vector = IC_c3540->getP1();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

int c3540GetFitnessValue(float theta) {
    return IC_c3540->getFitnessValue(theta);
}

c5315* IC_c5315;

unsigned int c5315Init() {
    IC_c5315 = new c5315();
    return 0;
}

void c5315Delete() {
    delete IC_c5315;
}

unsigned int c5315NumInput() {
    return IC_c5315->n_input;
}

unsigned int c5315NumOutput() {
    return IC_c5315->n_output;
}

unsigned int c5315NumWire() {
    return IC_c5315->n_wire;
}

void c5315LoadInput(bool *in, int len) {
    std::vector<bool> in_vector(in, in + len);
    IC_c5315->loadInput(in_vector);
}

void c5315Propagate() {
    IC_c5315->propagate();
}

void c5315GetOutput(bool *out, int len) {
    std::vector<bool> out_vector = IC_c5315->getOutput();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c5315GetNodeState(bool *out, int len) {
    std::vector<bool> out_vector = IC_c5315->getNodeState();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c5315GetTransitionProbability(float *out, int len) {
    std::vector<float> out_vector = IC_c5315->getTransitionProbability();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c5315GetP0(float *out, int len) {
    std::vector<float> out_vector = IC_c5315->getP0();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c5315GetP1(float *out, int len) {
    std::vector<float> out_vector = IC_c5315->getP1();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

int c5315GetFitnessValue(float theta) {
    return IC_c5315->getFitnessValue(theta);
}

c7552* IC_c7552;

unsigned int c7552Init() {
    IC_c7552 = new c7552();
    return 0;
}

void c7552Delete() {
    delete IC_c7552;
}

unsigned int c7552NumInput() {
    return IC_c7552->n_input;
}

unsigned int c7552NumOutput() {
    return IC_c7552->n_output;
}

unsigned int c7552NumWire() {
    return IC_c7552->n_wire;
}

void c7552LoadInput(bool *in, int len) {
    std::vector<bool> in_vector(in, in + len);
    IC_c7552->loadInput(in_vector);
}

void c7552Propagate() {
    IC_c7552->propagate();
}

void c7552GetOutput(bool *out, int len) {
    std::vector<bool> out_vector = IC_c7552->getOutput();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c7552GetNodeState(bool *out, int len) {
    std::vector<bool> out_vector = IC_c7552->getNodeState();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c7552GetTransitionProbability(float *out, int len) {
    std::vector<float> out_vector = IC_c7552->getTransitionProbability();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c7552GetP0(float *out, int len) {
    std::vector<float> out_vector = IC_c7552->getP0();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

void c7552GetP1(float *out, int len) {
    std::vector<float> out_vector = IC_c7552->getP1();
    for(int i=0; i<len; i++) {
        out[i] = out_vector[i];
    }
}

int c7552GetFitnessValue(float theta) {
    return IC_c7552->getFitnessValue(theta);
}