import numpy as np
import numpy.ctypeslib as ctl
import ctypes

libname = 'ctypetestlib.so'
libdir = './'
lib=ctl.load_library(libname, libdir)

py_getFitnessValue = lib.getFitnessValue
py_getFitnessValue.argtypes = [ctl.ndpointer(np.bool8, flags='aligned, c_contiguous'), ctypes.c_int, ctypes.c_float]
choices = [True, False]
bool_arr = np.random.choice(choices, size=207)
results = py_getFitnessValue(bool_arr, len(bool_arr), 0.01)
print(results)