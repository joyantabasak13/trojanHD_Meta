import numpy as np

# Import Lib
from cffi import FFI

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
theta=0.01
c_lib.c880Init()

c880_n_input = c_lib.c880NumInput()
c880_n_output = c_lib.c880NumOutput()
c880_n_wire = c_lib.c880NumWire()
print(c880_n_input, c880_n_output, c880_n_wire)

# For testing input-output
choices = [False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True, False, True]
in_arr = np.array(choices, dtype=np.bool8)

# For random input
# choices = [True, False]
# in_arr = np.random.choice(choices, size=c880_n_input)

c_lib.c880LoadInput(ffi.cast("bool *", in_arr.ctypes.data), len(in_arr))

c_lib.c880Propagate()

out_arr = np.zeros(c880_n_output, dtype=np.bool8)
c_lib.c880GetOutput(ffi.cast("bool *", out_arr.ctypes.data), len(out_arr))

print(out_arr)

node_state_arr = np.zeros(c880_n_wire, dtype=np.bool8)
c_lib.c880GetNodeState(ffi.cast("bool *", node_state_arr.ctypes.data), len(node_state_arr))

print(node_state_arr)

c880_trans_prob = np.zeros(c880_n_wire, dtype=np.float32)
c_lib.c880GetTransitionProbability(ffi.cast("float *", c880_trans_prob.ctypes.data), len(c880_trans_prob))

c880_P0 = np.zeros(c880_n_wire, dtype=np.float32)
c_lib.c880GetP0(ffi.cast("float *", c880_P0.ctypes.data), len(c880_P0))

c880_P1 = np.zeros(c880_n_wire, dtype=np.float32)
c_lib.c880GetP1(ffi.cast("float *", c880_P1.ctypes.data), len(c880_P1))

with np.printoptions(precision=10, suppress=True):
    print(c880_trans_prob)
    print(c880_P0)
    print(c880_P1)

c880_fitness_value = c_lib.c880GetFitnessValue(theta)
print(c880_fitness_value)

c_lib.c880Delete()
