#ifndef CFFI_DRIVER_H
#define CFFI_DRIVER_H

#include "c880.h"
#include "c2670.h"
#include "c3540.h"
#include "c5315.h"
#include "c7552.h"

extern "C" {
    unsigned int c880Init();
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
    int c7552GetFitnessValue(float theta);
} //end extern "C"

#endif