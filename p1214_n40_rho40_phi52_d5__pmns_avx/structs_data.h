#ifndef STRUCTS_DATA
#define STRUCTS_DATA


#define PHI_LOG2 52
#define POLY_DEG 39
#define NB_COEFF 40
#define NB_ADD_MAX 5

#define RHO_LOG2 40  // rho = 1 << RHO_LOG2.

#define CONV_MASK 1099511627775UL  // CONV_MASK = (1 << RHO_LOG2) - 1, for conversion

#define REDINT_MASK 4503599627370495UL  // REDINT_MASK = (1 << PHI_LOG2) - 1, for internal reduction

#endif

