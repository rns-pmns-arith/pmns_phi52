#ifndef STRUCTS_DATA
#define STRUCTS_DATA


#define PHI_LOG2 52
#define POLY_DEG 73
#define NB_COEFF 74
#define NB_ADD_MAX 5

#define RHO_LOG2 38  // rho = 1 << RHO_LOG2.

#define CONV_MASK 274877906943UL  // CONV_MASK = (1 << RHO_LOG2) - 1, for conversion

#define REDINT_MASK 4503599627370495UL  // REDINT_MASK = (1 << PHI_LOG2) - 1, for internal reduction

#include "useful_functs.h"

#endif

