#define zero512 (__m512i){0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}
#define idx_a0 (__m512i){0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL,0x8UL}
#define idx_a1 (__m512i){0x8UL,0x8UL,0x8UL,0x8UL,0x8UL,0x8UL,0x8UL,0x8UL}
#define mask52 (__m512i){REDINT_MASK,REDINT_MASK,REDINT_MASK,REDINT_MASK,REDINT_MASK,REDINT_MASK,REDINT_MASK,REDINT_MASK}

#include "avx_const_data.h"


#define idx_0 (__m512i){0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}
#define idx_1 (__m512i){0x1UL,0x1UL,0x1UL,0x1UL,0x1UL,0x1UL,0x1UL,0x1UL}
#define idx_2 (__m512i){0x2UL,0x2UL,0x2UL,0x2UL,0x2UL,0x2UL,0x2UL,0x2UL}
#define idx_3 (__m512i){0x3UL,0x3UL,0x3UL,0x3UL,0x3UL,0x3UL,0x3UL,0x3UL}
#define idx_4 (__m512i){0x4UL,0x4UL,0x4UL,0x4UL,0x4UL,0x4UL,0x4UL,0x4UL}
#define idx_5 (__m512i){0x5UL,0x5UL,0x5UL,0x5UL,0x5UL,0x5UL,0x5UL,0x5UL}
#define idx_6 (__m512i){0x6UL,0x6UL,0x6UL,0x6UL,0x6UL,0x6UL,0x6UL,0x6UL}
#define idx_7 (__m512i){0x7UL,0x7UL,0x7UL,0x7UL,0x7UL,0x7UL,0x7UL,0x7UL}

#define idx_opl (__m512i){0UL,2UL,4UL,6UL,0x8UL,0xAUL,0xCUL,0xEUL}
#define idx_oph (__m512i){0x1UL,0x3UL,0x5UL,0x7UL,0x9UL,0xBUL,0xDUL,0xFUL}
#define idx_l (__m512i){0x0UL,0x8UL,0x1UL,0x9UL,0x2UL,0xAUL,0x3UL,0xBUL}
#define idx_h (__m512i){0x4UL,0xCUL,0x5UL,0xDUL,0x6UL,0xEUL,0x7UL,0xFUL}

#define idx_c25 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c26 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c27 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c28 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c29 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c30 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c31 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c32 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c33 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c34 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c35 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c36 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c37 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c38 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c39 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c40 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c41 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c42 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c43 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c44 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c45 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c46 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c47 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c48 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}

void mult_mod_poly_AVX512(int64_t *rop, int64_t *pa, int64_t *pb){


	__m512i tmp512_b, carry;
	__m512i pa512[NB_COEFF];

	pa512[0] = _mm512_loadu_epi64(pa);
	pa512[1] = _mm512_loadu_epi64(pa+8);
	pa512[2] = _mm512_loadu_epi64(pa+16);
	pa512[3] = _mm512_loadu_epi64(pa+24);
	__m512i tmp512_0, tmp512_1, tmp512_2 ;


	__m512i acc512l0 = zero512, cx512l0 = zero512, acc512l1 = zero512, cx512l1 = zero512, acc512l2 = zero512, cx512l2 = zero512, acc512l3 = zero512, cx512l3 = zero512 ;

	__m512i acc512h0 = zero512, cx512h0 = zero512, acc512h1 = zero512, cx512h1 = zero512, acc512h2 = zero512, cx512h2 = zero512, acc512h3 = zero512, cx512h3 = zero512 ;

	tmp512_b = _mm512_set1_epi64(pb[24]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l3 = _mm512_permutex2var_epi64(cx512l3,idx_c48,acc512l2);
	cx512h3 = _mm512_permutex2var_epi64(cx512h3,idx_c48,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[23]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c47,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c47,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[22]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c46,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c46,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[21]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c45,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c45,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[20]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c44,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c44,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[19]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c43,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c43,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[18]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c42,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c42,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[17]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c41,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c41,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[16]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c40,acc512l1);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c40,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[15]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c39,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c39,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[14]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c38,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c38,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[13]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c37,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c37,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[12]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c36,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c36,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[11]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c35,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c35,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[10]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c34,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c34,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[9]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c33,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c33,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[8]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c32,acc512l0);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c32,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[7]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c31,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c31,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[6]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c30,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c30,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[5]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c29,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c29,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[4]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c28,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c28,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[3]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c27,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c27,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[2]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c26,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c26,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[1]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c25,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c25,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[0]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	pa512[3] = _mm512_permutex2var_epi64(pa512[3],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	// final carries

	acc512l0 = _mm512_add_epi64(acc512l0,cx512l0);
	acc512h0 = _mm512_add_epi64(acc512h0,cx512h0);

	acc512l1 = _mm512_add_epi64(acc512l1,cx512l1);
	acc512h1 = _mm512_add_epi64(acc512h1,cx512h1);

	acc512l2 = _mm512_add_epi64(acc512l2,cx512l2);
	acc512h2 = _mm512_add_epi64(acc512h2,cx512h2);

	acc512l3 = _mm512_add_epi64(acc512l3,cx512l3);
	acc512h3 = _mm512_add_epi64(acc512h3,cx512h3);

	// internal reduction

	//Computation of Q
	//~ computation of : op*neg_inv_ri_rep_coeff mod(E, mont_phi)

	__m512i opl512 = _mm512_permutexvar_epi64(idx_0,acc512l0);
	__m512i q512_0 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_0);
	__m512i q512_1 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_1);
	__m512i q512_2 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_2);
	__m512i q512_3 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_3);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_1_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_1_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_1_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_1_3);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_2_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_2_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_2_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_2_3);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_3_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_3_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_3_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_3_3);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_4_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_4_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_4_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_4_3);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_5_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_5_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_5_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_5_3);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_6_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_6_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_6_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_6_3);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_7_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_7_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_7_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_7_3);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_8_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_8_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_8_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_8_3);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_9_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_9_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_9_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_9_3);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_10_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_10_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_10_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_10_3);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_11_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_11_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_11_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_11_3);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_12_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_12_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_12_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_12_3);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_13_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_13_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_13_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_13_3);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_14_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_14_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_14_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_14_3);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_15_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_15_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_15_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_15_3);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_16_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_16_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_16_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_16_3);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_17_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_17_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_17_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_17_3);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_18_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_18_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_18_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_18_3);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_19_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_19_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_19_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_19_3);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_20_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_20_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_20_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_20_3);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_21_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_21_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_21_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_21_3);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_22_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_22_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_22_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_22_3);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_23_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_23_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_23_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_23_3);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l3);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_24_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_24_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_24_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_24_3);

	//~ computation of : Q*red_int_coeff mod(E)

	__m512i tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_0);
	__m512i tmpZero512l0 = _mm512_madd52lo_epu64(acc512l0,KZ_0_0,tmpq512);
	__m512i tmpZero512l1 = _mm512_madd52lo_epu64(acc512l1,KZ_0_1,tmpq512);
	__m512i tmpZero512l2 = _mm512_madd52lo_epu64(acc512l2,KZ_0_2,tmpq512);
	__m512i tmpZero512l3 = _mm512_madd52lo_epu64(acc512l3,KZ_0_3,tmpq512);
	__m512i tmpZero512h0 = _mm512_madd52hi_epu64(acc512h0,KZ_0_0,tmpq512);
	__m512i tmpZero512h1 = _mm512_madd52hi_epu64(acc512h1,KZ_0_1,tmpq512);
	__m512i tmpZero512h2 = _mm512_madd52hi_epu64(acc512h2,KZ_0_2,tmpq512);
	__m512i tmpZero512h3 = _mm512_madd52hi_epu64(acc512h3,KZ_0_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_1_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_1_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_1_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_1_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_1_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_1_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_1_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_1_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_2_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_2_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_2_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_2_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_2_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_2_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_2_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_2_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_3_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_3_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_3_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_3_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_3_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_3_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_3_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_3_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_4_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_4_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_4_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_4_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_4_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_4_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_4_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_4_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_5_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_5_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_5_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_5_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_5_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_5_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_5_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_5_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_6_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_6_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_6_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_6_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_6_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_6_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_6_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_6_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_7_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_7_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_7_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_7_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_7_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_7_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_7_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_7_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_8_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_8_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_8_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_8_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_8_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_8_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_8_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_8_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_9_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_9_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_9_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_9_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_9_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_9_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_9_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_9_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_10_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_10_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_10_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_10_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_10_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_10_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_10_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_10_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_11_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_11_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_11_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_11_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_11_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_11_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_11_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_11_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_12_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_12_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_12_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_12_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_12_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_12_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_12_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_12_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_13_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_13_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_13_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_13_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_13_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_13_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_13_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_13_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_14_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_14_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_14_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_14_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_14_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_14_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_14_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_14_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_15_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_15_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_15_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_15_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_15_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_15_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_15_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_15_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_16_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_16_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_16_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_16_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_16_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_16_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_16_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_16_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_17_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_17_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_17_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_17_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_17_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_17_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_17_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_17_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_18_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_18_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_18_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_18_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_18_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_18_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_18_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_18_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_19_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_19_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_19_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_19_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_19_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_19_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_19_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_19_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_20_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_20_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_20_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_20_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_20_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_20_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_20_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_20_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_21_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_21_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_21_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_21_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_21_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_21_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_21_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_21_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_22_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_22_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_22_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_22_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_22_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_22_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_22_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_22_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_23_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_23_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_23_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_23_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_23_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_23_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_23_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_23_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_24_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_24_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_24_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_24_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_24_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_24_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_24_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_24_3,tmpq512);

	// Final reconstruction
	carry = _mm512_srli_epi64(tmpZero512l0,52);
	tmpZero512h0 = _mm512_add_epi64(carry,tmpZero512h0);
	carry = _mm512_srli_epi64(tmpZero512l1,52);
	tmpZero512h1 = _mm512_add_epi64(carry,tmpZero512h1);
	carry = _mm512_srli_epi64(tmpZero512l2,52);
	tmpZero512h2 = _mm512_add_epi64(carry,tmpZero512h2);
	carry = _mm512_srli_epi64(tmpZero512l3,52);
	tmpZero512h3 = _mm512_add_epi64(carry,tmpZero512h3);

	_mm512_store_epi64(rop,tmpZero512h0);
	_mm512_store_epi64(rop+8,tmpZero512h1);
	_mm512_store_epi64(rop+16,tmpZero512h2);
	_mm512_store_epi64(rop+24,tmpZero512h3);


}

#define idx_opl (__m512i){0UL,2UL,4UL,6UL,0x8UL,0xAUL,0xCUL,0xEUL}
#define idx_oph (__m512i){0x1UL,0x3UL,0x5UL,0x7UL,0x9UL,0xBUL,0xDUL,0xFUL}

inline void internal_reduction_512(int64_t *rop, int128 *op){

	__m512i carry;

	__m512i acc512l0 = zero512, acc512l1 = zero512, acc512l2 = zero512, acc512l3 = zero512 ;

	__m512i acc512h0 = zero512, acc512h1 = zero512, acc512h2 = zero512, acc512h3 = zero512 ;


	//Computation of Q
	//~ computation of : op*neg_inv_ri_rep_coeff mod(E, mont_phi)

	__m512i opl512 = _mm512_set1_epi64((uint64_t)op[0]);
	__m512i q512_0 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_0);
	__m512i q512_1 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_1);
	__m512i q512_2 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_2);
	__m512i q512_3 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[1]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_1_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_1_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_1_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_1_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[2]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_2_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_2_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_2_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_2_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[3]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_3_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_3_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_3_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_3_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[4]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_4_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_4_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_4_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_4_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[5]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_5_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_5_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_5_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_5_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[6]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_6_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_6_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_6_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_6_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[7]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_7_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_7_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_7_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_7_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[8]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_8_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_8_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_8_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_8_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[9]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_9_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_9_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_9_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_9_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[10]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_10_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_10_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_10_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_10_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[11]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_11_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_11_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_11_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_11_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[12]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_12_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_12_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_12_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_12_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[13]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_13_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_13_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_13_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_13_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[14]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_14_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_14_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_14_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_14_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[15]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_15_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_15_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_15_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_15_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[16]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_16_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_16_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_16_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_16_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[17]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_17_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_17_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_17_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_17_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[18]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_18_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_18_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_18_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_18_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[19]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_19_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_19_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_19_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_19_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[20]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_20_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_20_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_20_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_20_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[21]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_21_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_21_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_21_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_21_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[22]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_22_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_22_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_22_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_22_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[23]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_23_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_23_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_23_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_23_3);

	opl512 = _mm512_set1_epi64((uint64_t)op[24]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_24_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_24_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_24_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_24_3);

	//~ computation of : Q*red_int_coeff mod(E)

	__m512i tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_0);
	__m512i tmpZero512l0 = _mm512_madd52lo_epu64(acc512l0,KZ_0_0,tmpq512);
	__m512i tmpZero512l1 = _mm512_madd52lo_epu64(acc512l1,KZ_0_1,tmpq512);
	__m512i tmpZero512l2 = _mm512_madd52lo_epu64(acc512l2,KZ_0_2,tmpq512);
	__m512i tmpZero512l3 = _mm512_madd52lo_epu64(acc512l3,KZ_0_3,tmpq512);
	__m512i tmpZero512h0 = _mm512_madd52hi_epu64(acc512h0,KZ_0_0,tmpq512);
	__m512i tmpZero512h1 = _mm512_madd52hi_epu64(acc512h1,KZ_0_1,tmpq512);
	__m512i tmpZero512h2 = _mm512_madd52hi_epu64(acc512h2,KZ_0_2,tmpq512);
	__m512i tmpZero512h3 = _mm512_madd52hi_epu64(acc512h3,KZ_0_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_1_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_1_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_1_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_1_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_1_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_1_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_1_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_1_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_2_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_2_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_2_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_2_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_2_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_2_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_2_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_2_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_3_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_3_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_3_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_3_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_3_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_3_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_3_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_3_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_4_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_4_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_4_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_4_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_4_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_4_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_4_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_4_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_5_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_5_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_5_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_5_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_5_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_5_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_5_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_5_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_6_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_6_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_6_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_6_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_6_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_6_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_6_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_6_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_7_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_7_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_7_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_7_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_7_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_7_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_7_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_7_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_8_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_8_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_8_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_8_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_8_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_8_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_8_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_8_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_9_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_9_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_9_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_9_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_9_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_9_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_9_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_9_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_10_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_10_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_10_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_10_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_10_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_10_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_10_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_10_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_11_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_11_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_11_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_11_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_11_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_11_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_11_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_11_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_12_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_12_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_12_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_12_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_12_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_12_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_12_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_12_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_13_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_13_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_13_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_13_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_13_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_13_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_13_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_13_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_14_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_14_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_14_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_14_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_14_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_14_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_14_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_14_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_15_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_15_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_15_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_15_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_15_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_15_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_15_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_15_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_16_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_16_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_16_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_16_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_16_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_16_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_16_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_16_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_17_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_17_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_17_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_17_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_17_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_17_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_17_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_17_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_18_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_18_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_18_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_18_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_18_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_18_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_18_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_18_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_19_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_19_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_19_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_19_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_19_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_19_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_19_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_19_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_20_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_20_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_20_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_20_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_20_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_20_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_20_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_20_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_21_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_21_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_21_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_21_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_21_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_21_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_21_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_21_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_22_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_22_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_22_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_22_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_22_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_22_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_22_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_22_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_23_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_23_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_23_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_23_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_23_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_23_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_23_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_23_3,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_24_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_24_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_24_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_24_3,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_24_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_24_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_24_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_24_3,tmpq512);

	// Final reconstruction

	// Final reconstruction
	carry = _mm512_srli_epi64(tmpZero512l0,52);
	tmpZero512h0 = _mm512_add_epi64(carry,tmpZero512h0);
	carry = _mm512_srli_epi64(tmpZero512l1,52);
	tmpZero512h1 = _mm512_add_epi64(carry,tmpZero512h1);
	carry = _mm512_srli_epi64(tmpZero512l2,52);
	tmpZero512h2 = _mm512_add_epi64(carry,tmpZero512h2);
	carry = _mm512_srli_epi64(tmpZero512l3,52);
	tmpZero512h3 = _mm512_add_epi64(carry,tmpZero512h3);

	_mm512_store_epi64(rop,tmpZero512h0);
	_mm512_store_epi64(rop+8,tmpZero512h1);
	_mm512_store_epi64(rop+16,tmpZero512h2);
	_mm512_store_epi64(rop+24,tmpZero512h3);


}
