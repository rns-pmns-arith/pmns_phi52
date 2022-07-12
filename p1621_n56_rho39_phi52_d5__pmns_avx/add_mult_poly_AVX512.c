#define zero512 (__m512i){0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}
#define idx_a0 (__m512i){0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL,0x8UL}
#define idx_a1 (__m512i){0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL,0x8UL}
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

#define idx_c56 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c57 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c58 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c59 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c60 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c61 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c62 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c63 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c64 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c65 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c66 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c67 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c68 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c69 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c70 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c71 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c72 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c73 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c74 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c75 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c76 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c77 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c78 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c79 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c80 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c81 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c82 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c83 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c84 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c85 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c86 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c87 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c88 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c89 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c90 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c91 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c92 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c93 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c94 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c95 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c96 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c97 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c98 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c99 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c100 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c101 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c102 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c103 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c104 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c105 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c106 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c107 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c108 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c109 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c110 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}

void mult_mod_poly_AVX512(int64_t *rop, int64_t *pa, int64_t *pb){


	__m512i tmp512_b, carry;
	__m512i pa512[NB_COEFF];

	pa512[0] = _mm512_loadu_epi64(pa);
	pa512[1] = _mm512_loadu_epi64(pa+8);
	pa512[2] = _mm512_loadu_epi64(pa+16);
	pa512[3] = _mm512_loadu_epi64(pa+24);
	pa512[4] = _mm512_loadu_epi64(pa+32);
	pa512[5] = _mm512_loadu_epi64(pa+40);
	pa512[6] = _mm512_loadu_epi64(pa+48);
	__m512i tmp512_0, tmp512_1, tmp512_2, tmp512_3, tmp512_4, tmp512_5 ;


	__m512i acc512l0 = zero512, cx512l0 = zero512, acc512l1 = zero512, cx512l1 = zero512, acc512l2 = zero512, cx512l2 = zero512, acc512l3 = zero512, cx512l3 = zero512, acc512l4 = zero512, cx512l4 = zero512, acc512l5 = zero512, cx512l5 = zero512, acc512l6 = zero512, cx512l6 = zero512 ;

	__m512i acc512h0 = zero512, cx512h0 = zero512, acc512h1 = zero512, cx512h1 = zero512, acc512h2 = zero512, cx512h2 = zero512, acc512h3 = zero512, cx512h3 = zero512, acc512h4 = zero512, cx512h4 = zero512, acc512h5 = zero512, cx512h5 = zero512, acc512h6 = zero512, cx512h6 = zero512 ;

	tmp512_b = _mm512_set1_epi64(pb[55]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l6 = _mm512_permutex2var_epi64(cx512l6,idx_c110,acc512l6);
	cx512h6 = _mm512_permutex2var_epi64(cx512h6,idx_c110,acc512h6);

	tmp512_b = _mm512_set1_epi64(pb[54]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l6 = _mm512_permutex2var_epi64(cx512l6,idx_c109,acc512l6);
	cx512h6 = _mm512_permutex2var_epi64(cx512h6,idx_c109,acc512h6);

	tmp512_b = _mm512_set1_epi64(pb[53]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l6 = _mm512_permutex2var_epi64(cx512l6,idx_c108,acc512l6);
	cx512h6 = _mm512_permutex2var_epi64(cx512h6,idx_c108,acc512h6);

	tmp512_b = _mm512_set1_epi64(pb[52]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l6 = _mm512_permutex2var_epi64(cx512l6,idx_c107,acc512l6);
	cx512h6 = _mm512_permutex2var_epi64(cx512h6,idx_c107,acc512h6);

	tmp512_b = _mm512_set1_epi64(pb[51]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l6 = _mm512_permutex2var_epi64(cx512l6,idx_c106,acc512l6);
	cx512h6 = _mm512_permutex2var_epi64(cx512h6,idx_c106,acc512h6);

	tmp512_b = _mm512_set1_epi64(pb[50]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l6 = _mm512_permutex2var_epi64(cx512l6,idx_c105,acc512l6);
	cx512h6 = _mm512_permutex2var_epi64(cx512h6,idx_c105,acc512h6);

	tmp512_b = _mm512_set1_epi64(pb[49]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l6 = _mm512_permutex2var_epi64(cx512l6,idx_c104,acc512l6);
	cx512h6 = _mm512_permutex2var_epi64(cx512h6,idx_c104,acc512h6);

	tmp512_b = _mm512_set1_epi64(pb[48]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l6 = _mm512_permutex2var_epi64(cx512l6,idx_c103,acc512l5);
	cx512h6 = _mm512_permutex2var_epi64(cx512h6,idx_c103,acc512h5);

	tmp512_b = _mm512_set1_epi64(pb[47]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l5 = _mm512_permutex2var_epi64(cx512l5,idx_c102,acc512l5);
	cx512h5 = _mm512_permutex2var_epi64(cx512h5,idx_c102,acc512h5);

	tmp512_b = _mm512_set1_epi64(pb[46]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l5 = _mm512_permutex2var_epi64(cx512l5,idx_c101,acc512l5);
	cx512h5 = _mm512_permutex2var_epi64(cx512h5,idx_c101,acc512h5);

	tmp512_b = _mm512_set1_epi64(pb[45]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l5 = _mm512_permutex2var_epi64(cx512l5,idx_c100,acc512l5);
	cx512h5 = _mm512_permutex2var_epi64(cx512h5,idx_c100,acc512h5);

	tmp512_b = _mm512_set1_epi64(pb[44]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l5 = _mm512_permutex2var_epi64(cx512l5,idx_c99,acc512l5);
	cx512h5 = _mm512_permutex2var_epi64(cx512h5,idx_c99,acc512h5);

	tmp512_b = _mm512_set1_epi64(pb[43]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l5 = _mm512_permutex2var_epi64(cx512l5,idx_c98,acc512l5);
	cx512h5 = _mm512_permutex2var_epi64(cx512h5,idx_c98,acc512h5);

	tmp512_b = _mm512_set1_epi64(pb[42]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l5 = _mm512_permutex2var_epi64(cx512l5,idx_c97,acc512l5);
	cx512h5 = _mm512_permutex2var_epi64(cx512h5,idx_c97,acc512h5);

	tmp512_b = _mm512_set1_epi64(pb[41]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l5 = _mm512_permutex2var_epi64(cx512l5,idx_c96,acc512l5);
	cx512h5 = _mm512_permutex2var_epi64(cx512h5,idx_c96,acc512h5);

	tmp512_b = _mm512_set1_epi64(pb[40]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l5 = _mm512_permutex2var_epi64(cx512l5,idx_c95,acc512l4);
	cx512h5 = _mm512_permutex2var_epi64(cx512h5,idx_c95,acc512h4);

	tmp512_b = _mm512_set1_epi64(pb[39]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l4 = _mm512_permutex2var_epi64(cx512l4,idx_c94,acc512l4);
	cx512h4 = _mm512_permutex2var_epi64(cx512h4,idx_c94,acc512h4);

	tmp512_b = _mm512_set1_epi64(pb[38]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l4 = _mm512_permutex2var_epi64(cx512l4,idx_c93,acc512l4);
	cx512h4 = _mm512_permutex2var_epi64(cx512h4,idx_c93,acc512h4);

	tmp512_b = _mm512_set1_epi64(pb[37]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l4 = _mm512_permutex2var_epi64(cx512l4,idx_c92,acc512l4);
	cx512h4 = _mm512_permutex2var_epi64(cx512h4,idx_c92,acc512h4);

	tmp512_b = _mm512_set1_epi64(pb[36]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l4 = _mm512_permutex2var_epi64(cx512l4,idx_c91,acc512l4);
	cx512h4 = _mm512_permutex2var_epi64(cx512h4,idx_c91,acc512h4);

	tmp512_b = _mm512_set1_epi64(pb[35]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l4 = _mm512_permutex2var_epi64(cx512l4,idx_c90,acc512l4);
	cx512h4 = _mm512_permutex2var_epi64(cx512h4,idx_c90,acc512h4);

	tmp512_b = _mm512_set1_epi64(pb[34]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l4 = _mm512_permutex2var_epi64(cx512l4,idx_c89,acc512l4);
	cx512h4 = _mm512_permutex2var_epi64(cx512h4,idx_c89,acc512h4);

	tmp512_b = _mm512_set1_epi64(pb[33]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l4 = _mm512_permutex2var_epi64(cx512l4,idx_c88,acc512l4);
	cx512h4 = _mm512_permutex2var_epi64(cx512h4,idx_c88,acc512h4);

	tmp512_b = _mm512_set1_epi64(pb[32]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l4 = _mm512_permutex2var_epi64(cx512l4,idx_c87,acc512l3);
	cx512h4 = _mm512_permutex2var_epi64(cx512h4,idx_c87,acc512h3);

	tmp512_b = _mm512_set1_epi64(pb[31]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l3 = _mm512_permutex2var_epi64(cx512l3,idx_c86,acc512l3);
	cx512h3 = _mm512_permutex2var_epi64(cx512h3,idx_c86,acc512h3);

	tmp512_b = _mm512_set1_epi64(pb[30]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l3 = _mm512_permutex2var_epi64(cx512l3,idx_c85,acc512l3);
	cx512h3 = _mm512_permutex2var_epi64(cx512h3,idx_c85,acc512h3);

	tmp512_b = _mm512_set1_epi64(pb[29]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l3 = _mm512_permutex2var_epi64(cx512l3,idx_c84,acc512l3);
	cx512h3 = _mm512_permutex2var_epi64(cx512h3,idx_c84,acc512h3);

	tmp512_b = _mm512_set1_epi64(pb[28]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l3 = _mm512_permutex2var_epi64(cx512l3,idx_c83,acc512l3);
	cx512h3 = _mm512_permutex2var_epi64(cx512h3,idx_c83,acc512h3);

	tmp512_b = _mm512_set1_epi64(pb[27]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l3 = _mm512_permutex2var_epi64(cx512l3,idx_c82,acc512l3);
	cx512h3 = _mm512_permutex2var_epi64(cx512h3,idx_c82,acc512h3);

	tmp512_b = _mm512_set1_epi64(pb[26]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l3 = _mm512_permutex2var_epi64(cx512l3,idx_c81,acc512l3);
	cx512h3 = _mm512_permutex2var_epi64(cx512h3,idx_c81,acc512h3);

	tmp512_b = _mm512_set1_epi64(pb[25]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l3 = _mm512_permutex2var_epi64(cx512l3,idx_c80,acc512l3);
	cx512h3 = _mm512_permutex2var_epi64(cx512h3,idx_c80,acc512h3);

	tmp512_b = _mm512_set1_epi64(pb[24]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l3 = _mm512_permutex2var_epi64(cx512l3,idx_c79,acc512l2);
	cx512h3 = _mm512_permutex2var_epi64(cx512h3,idx_c79,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[23]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c78,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c78,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[22]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c77,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c77,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[21]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c76,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c76,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[20]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c75,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c75,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[19]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c74,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c74,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[18]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c73,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c73,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[17]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c72,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c72,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[16]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c71,acc512l1);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c71,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[15]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c70,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c70,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[14]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c69,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c69,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[13]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c68,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c68,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[12]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c67,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c67,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[11]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c66,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c66,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[10]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c65,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c65,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[9]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c64,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c64,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[8]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c63,acc512l0);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c63,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[7]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c62,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c62,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[6]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c61,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c61,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[5]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c60,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c60,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[4]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c59,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c59,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[3]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c58,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c58,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[2]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c57,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c57,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[1]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c56,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c56,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[0]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	pa512[6] = _mm512_permutex2var_epi64(pa512[6],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;

	acc512l0 = _mm512_madd52lo_epu64(acc512l0,pa512[0],tmp512_b);
	acc512h0 = _mm512_madd52hi_epu64(acc512h0,pa512[0],tmp512_b);

	acc512l1 = _mm512_madd52lo_epu64(acc512l1,pa512[1],tmp512_b);
	acc512h1 = _mm512_madd52hi_epu64(acc512h1,pa512[1],tmp512_b);

	acc512l2 = _mm512_madd52lo_epu64(acc512l2,pa512[2],tmp512_b);
	acc512h2 = _mm512_madd52hi_epu64(acc512h2,pa512[2],tmp512_b);

	acc512l3 = _mm512_madd52lo_epu64(acc512l3,pa512[3],tmp512_b);
	acc512h3 = _mm512_madd52hi_epu64(acc512h3,pa512[3],tmp512_b);

	acc512l4 = _mm512_madd52lo_epu64(acc512l4,pa512[4],tmp512_b);
	acc512h4 = _mm512_madd52hi_epu64(acc512h4,pa512[4],tmp512_b);

	acc512l5 = _mm512_madd52lo_epu64(acc512l5,pa512[5],tmp512_b);
	acc512h5 = _mm512_madd52hi_epu64(acc512h5,pa512[5],tmp512_b);

	acc512l6 = _mm512_madd52lo_epu64(acc512l6,pa512[6],tmp512_b);
	acc512h6 = _mm512_madd52hi_epu64(acc512h6,pa512[6],tmp512_b);

	// final carries

	acc512l0 = _mm512_add_epi64(acc512l0,cx512l0);
	acc512h0 = _mm512_add_epi64(acc512h0,cx512h0);

	acc512l1 = _mm512_add_epi64(acc512l1,cx512l1);
	acc512h1 = _mm512_add_epi64(acc512h1,cx512h1);

	acc512l2 = _mm512_add_epi64(acc512l2,cx512l2);
	acc512h2 = _mm512_add_epi64(acc512h2,cx512h2);

	acc512l3 = _mm512_add_epi64(acc512l3,cx512l3);
	acc512h3 = _mm512_add_epi64(acc512h3,cx512h3);

	acc512l4 = _mm512_add_epi64(acc512l4,cx512l4);
	acc512h4 = _mm512_add_epi64(acc512h4,cx512h4);

	acc512l5 = _mm512_add_epi64(acc512l5,cx512l5);
	acc512h5 = _mm512_add_epi64(acc512h5,cx512h5);

	acc512l6 = _mm512_add_epi64(acc512l6,cx512l6);
	acc512h6 = _mm512_add_epi64(acc512h6,cx512h6);

	// internal reduction

	//Computation of Q
	//~ computation of : op*neg_inv_ri_rep_coeff mod(E, mont_phi)

	__m512i opl512 = _mm512_permutexvar_epi64(idx_0,acc512l0);
	__m512i q512_0 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_0);
	__m512i q512_1 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_1);
	__m512i q512_2 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_2);
	__m512i q512_3 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_3);
	__m512i q512_4 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_4);
	__m512i q512_5 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_5);
	__m512i q512_6 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_6);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_1_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_1_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_1_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_1_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_1_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_1_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_1_6);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_2_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_2_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_2_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_2_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_2_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_2_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_2_6);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_3_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_3_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_3_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_3_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_3_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_3_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_3_6);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_4_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_4_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_4_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_4_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_4_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_4_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_4_6);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_5_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_5_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_5_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_5_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_5_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_5_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_5_6);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_6_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_6_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_6_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_6_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_6_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_6_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_6_6);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_7_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_7_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_7_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_7_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_7_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_7_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_7_6);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_8_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_8_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_8_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_8_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_8_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_8_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_8_6);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_9_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_9_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_9_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_9_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_9_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_9_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_9_6);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_10_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_10_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_10_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_10_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_10_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_10_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_10_6);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_11_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_11_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_11_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_11_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_11_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_11_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_11_6);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_12_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_12_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_12_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_12_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_12_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_12_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_12_6);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_13_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_13_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_13_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_13_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_13_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_13_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_13_6);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_14_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_14_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_14_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_14_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_14_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_14_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_14_6);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_15_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_15_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_15_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_15_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_15_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_15_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_15_6);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_16_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_16_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_16_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_16_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_16_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_16_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_16_6);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_17_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_17_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_17_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_17_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_17_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_17_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_17_6);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_18_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_18_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_18_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_18_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_18_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_18_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_18_6);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_19_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_19_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_19_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_19_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_19_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_19_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_19_6);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_20_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_20_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_20_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_20_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_20_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_20_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_20_6);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_21_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_21_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_21_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_21_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_21_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_21_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_21_6);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_22_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_22_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_22_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_22_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_22_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_22_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_22_6);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_23_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_23_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_23_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_23_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_23_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_23_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_23_6);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l3);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_24_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_24_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_24_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_24_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_24_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_24_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_24_6);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l3);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_25_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_25_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_25_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_25_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_25_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_25_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_25_6);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l3);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_26_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_26_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_26_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_26_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_26_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_26_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_26_6);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l3);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_27_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_27_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_27_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_27_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_27_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_27_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_27_6);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l3);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_28_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_28_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_28_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_28_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_28_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_28_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_28_6);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l3);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_29_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_29_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_29_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_29_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_29_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_29_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_29_6);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l3);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_30_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_30_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_30_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_30_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_30_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_30_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_30_6);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l3);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_31_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_31_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_31_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_31_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_31_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_31_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_31_6);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l4);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_32_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_32_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_32_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_32_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_32_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_32_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_32_6);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l4);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_33_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_33_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_33_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_33_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_33_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_33_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_33_6);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l4);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_34_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_34_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_34_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_34_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_34_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_34_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_34_6);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l4);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_35_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_35_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_35_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_35_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_35_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_35_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_35_6);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l4);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_36_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_36_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_36_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_36_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_36_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_36_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_36_6);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l4);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_37_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_37_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_37_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_37_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_37_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_37_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_37_6);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l4);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_38_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_38_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_38_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_38_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_38_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_38_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_38_6);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l4);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_39_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_39_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_39_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_39_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_39_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_39_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_39_6);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l5);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_40_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_40_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_40_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_40_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_40_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_40_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_40_6);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l5);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_41_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_41_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_41_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_41_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_41_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_41_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_41_6);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l5);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_42_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_42_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_42_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_42_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_42_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_42_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_42_6);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l5);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_43_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_43_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_43_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_43_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_43_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_43_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_43_6);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l5);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_44_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_44_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_44_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_44_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_44_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_44_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_44_6);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l5);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_45_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_45_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_45_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_45_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_45_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_45_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_45_6);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l5);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_46_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_46_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_46_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_46_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_46_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_46_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_46_6);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l5);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_47_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_47_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_47_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_47_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_47_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_47_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_47_6);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l6);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_48_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_48_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_48_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_48_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_48_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_48_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_48_6);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l6);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_49_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_49_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_49_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_49_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_49_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_49_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_49_6);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l6);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_50_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_50_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_50_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_50_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_50_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_50_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_50_6);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l6);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_51_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_51_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_51_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_51_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_51_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_51_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_51_6);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l6);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_52_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_52_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_52_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_52_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_52_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_52_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_52_6);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l6);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_53_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_53_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_53_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_53_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_53_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_53_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_53_6);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l6);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_54_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_54_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_54_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_54_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_54_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_54_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_54_6);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l6);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_55_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_55_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_55_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_55_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_55_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_55_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_55_6);

	//~ computation of : Q*red_int_coeff mod(E)

	__m512i tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_0);
	__m512i tmpZero512l0 = _mm512_madd52lo_epu64(acc512l0,KZ_0_0,tmpq512);
	__m512i tmpZero512l1 = _mm512_madd52lo_epu64(acc512l1,KZ_0_1,tmpq512);
	__m512i tmpZero512l2 = _mm512_madd52lo_epu64(acc512l2,KZ_0_2,tmpq512);
	__m512i tmpZero512l3 = _mm512_madd52lo_epu64(acc512l3,KZ_0_3,tmpq512);
	__m512i tmpZero512l4 = _mm512_madd52lo_epu64(acc512l4,KZ_0_4,tmpq512);
	__m512i tmpZero512l5 = _mm512_madd52lo_epu64(acc512l5,KZ_0_5,tmpq512);
	__m512i tmpZero512l6 = _mm512_madd52lo_epu64(acc512l6,KZ_0_6,tmpq512);
	__m512i tmpZero512h0 = _mm512_madd52hi_epu64(acc512h0,KZ_0_0,tmpq512);
	__m512i tmpZero512h1 = _mm512_madd52hi_epu64(acc512h1,KZ_0_1,tmpq512);
	__m512i tmpZero512h2 = _mm512_madd52hi_epu64(acc512h2,KZ_0_2,tmpq512);
	__m512i tmpZero512h3 = _mm512_madd52hi_epu64(acc512h3,KZ_0_3,tmpq512);
	__m512i tmpZero512h4 = _mm512_madd52hi_epu64(acc512h4,KZ_0_4,tmpq512);
	__m512i tmpZero512h5 = _mm512_madd52hi_epu64(acc512h5,KZ_0_5,tmpq512);
	__m512i tmpZero512h6 = _mm512_madd52hi_epu64(acc512h6,KZ_0_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_1_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_1_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_1_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_1_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_1_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_1_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_1_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_1_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_1_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_1_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_1_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_1_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_1_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_1_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_2_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_2_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_2_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_2_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_2_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_2_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_2_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_2_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_2_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_2_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_2_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_2_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_2_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_2_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_3_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_3_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_3_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_3_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_3_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_3_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_3_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_3_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_3_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_3_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_3_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_3_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_3_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_3_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_4_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_4_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_4_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_4_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_4_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_4_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_4_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_4_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_4_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_4_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_4_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_4_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_4_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_4_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_5_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_5_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_5_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_5_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_5_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_5_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_5_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_5_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_5_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_5_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_5_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_5_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_5_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_5_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_6_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_6_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_6_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_6_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_6_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_6_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_6_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_6_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_6_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_6_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_6_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_6_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_6_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_6_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_7_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_7_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_7_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_7_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_7_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_7_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_7_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_7_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_7_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_7_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_7_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_7_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_7_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_7_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_8_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_8_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_8_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_8_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_8_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_8_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_8_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_8_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_8_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_8_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_8_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_8_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_8_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_8_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_9_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_9_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_9_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_9_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_9_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_9_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_9_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_9_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_9_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_9_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_9_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_9_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_9_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_9_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_10_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_10_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_10_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_10_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_10_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_10_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_10_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_10_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_10_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_10_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_10_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_10_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_10_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_10_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_11_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_11_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_11_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_11_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_11_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_11_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_11_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_11_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_11_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_11_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_11_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_11_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_11_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_11_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_12_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_12_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_12_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_12_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_12_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_12_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_12_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_12_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_12_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_12_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_12_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_12_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_12_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_12_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_13_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_13_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_13_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_13_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_13_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_13_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_13_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_13_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_13_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_13_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_13_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_13_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_13_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_13_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_14_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_14_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_14_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_14_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_14_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_14_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_14_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_14_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_14_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_14_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_14_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_14_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_14_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_14_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_15_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_15_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_15_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_15_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_15_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_15_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_15_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_15_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_15_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_15_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_15_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_15_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_15_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_15_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_16_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_16_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_16_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_16_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_16_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_16_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_16_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_16_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_16_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_16_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_16_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_16_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_16_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_16_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_17_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_17_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_17_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_17_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_17_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_17_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_17_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_17_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_17_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_17_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_17_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_17_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_17_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_17_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_18_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_18_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_18_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_18_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_18_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_18_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_18_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_18_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_18_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_18_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_18_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_18_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_18_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_18_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_19_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_19_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_19_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_19_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_19_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_19_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_19_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_19_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_19_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_19_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_19_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_19_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_19_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_19_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_20_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_20_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_20_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_20_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_20_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_20_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_20_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_20_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_20_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_20_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_20_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_20_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_20_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_20_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_21_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_21_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_21_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_21_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_21_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_21_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_21_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_21_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_21_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_21_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_21_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_21_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_21_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_21_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_22_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_22_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_22_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_22_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_22_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_22_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_22_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_22_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_22_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_22_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_22_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_22_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_22_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_22_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_23_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_23_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_23_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_23_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_23_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_23_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_23_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_23_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_23_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_23_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_23_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_23_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_23_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_23_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_24_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_24_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_24_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_24_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_24_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_24_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_24_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_24_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_24_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_24_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_24_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_24_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_24_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_24_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_25_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_25_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_25_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_25_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_25_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_25_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_25_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_25_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_25_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_25_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_25_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_25_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_25_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_25_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_26_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_26_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_26_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_26_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_26_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_26_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_26_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_26_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_26_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_26_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_26_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_26_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_26_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_26_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_27_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_27_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_27_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_27_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_27_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_27_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_27_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_27_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_27_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_27_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_27_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_27_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_27_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_27_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_28_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_28_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_28_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_28_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_28_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_28_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_28_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_28_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_28_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_28_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_28_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_28_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_28_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_28_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_29_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_29_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_29_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_29_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_29_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_29_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_29_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_29_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_29_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_29_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_29_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_29_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_29_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_29_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_30_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_30_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_30_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_30_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_30_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_30_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_30_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_30_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_30_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_30_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_30_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_30_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_30_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_30_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_31_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_31_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_31_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_31_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_31_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_31_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_31_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_31_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_31_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_31_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_31_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_31_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_31_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_31_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_32_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_32_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_32_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_32_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_32_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_32_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_32_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_32_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_32_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_32_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_32_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_32_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_32_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_32_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_33_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_33_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_33_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_33_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_33_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_33_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_33_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_33_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_33_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_33_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_33_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_33_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_33_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_33_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_34_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_34_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_34_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_34_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_34_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_34_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_34_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_34_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_34_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_34_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_34_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_34_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_34_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_34_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_35_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_35_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_35_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_35_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_35_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_35_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_35_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_35_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_35_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_35_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_35_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_35_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_35_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_35_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_36_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_36_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_36_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_36_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_36_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_36_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_36_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_36_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_36_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_36_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_36_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_36_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_36_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_36_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_37_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_37_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_37_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_37_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_37_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_37_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_37_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_37_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_37_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_37_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_37_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_37_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_37_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_37_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_38_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_38_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_38_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_38_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_38_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_38_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_38_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_38_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_38_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_38_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_38_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_38_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_38_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_38_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_39_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_39_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_39_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_39_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_39_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_39_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_39_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_39_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_39_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_39_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_39_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_39_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_39_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_39_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_40_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_40_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_40_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_40_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_40_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_40_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_40_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_40_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_40_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_40_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_40_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_40_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_40_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_40_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_41_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_41_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_41_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_41_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_41_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_41_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_41_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_41_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_41_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_41_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_41_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_41_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_41_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_41_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_42_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_42_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_42_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_42_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_42_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_42_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_42_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_42_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_42_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_42_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_42_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_42_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_42_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_42_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_43_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_43_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_43_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_43_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_43_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_43_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_43_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_43_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_43_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_43_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_43_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_43_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_43_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_43_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_44_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_44_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_44_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_44_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_44_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_44_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_44_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_44_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_44_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_44_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_44_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_44_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_44_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_44_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_45_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_45_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_45_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_45_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_45_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_45_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_45_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_45_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_45_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_45_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_45_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_45_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_45_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_45_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_46_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_46_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_46_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_46_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_46_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_46_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_46_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_46_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_46_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_46_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_46_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_46_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_46_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_46_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_47_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_47_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_47_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_47_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_47_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_47_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_47_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_47_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_47_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_47_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_47_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_47_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_47_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_47_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_48_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_48_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_48_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_48_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_48_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_48_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_48_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_48_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_48_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_48_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_48_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_48_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_48_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_48_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_49_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_49_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_49_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_49_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_49_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_49_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_49_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_49_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_49_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_49_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_49_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_49_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_49_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_49_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_50_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_50_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_50_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_50_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_50_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_50_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_50_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_50_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_50_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_50_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_50_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_50_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_50_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_50_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_51_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_51_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_51_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_51_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_51_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_51_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_51_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_51_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_51_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_51_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_51_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_51_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_51_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_51_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_52_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_52_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_52_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_52_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_52_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_52_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_52_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_52_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_52_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_52_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_52_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_52_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_52_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_52_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_53_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_53_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_53_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_53_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_53_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_53_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_53_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_53_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_53_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_53_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_53_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_53_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_53_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_53_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_54_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_54_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_54_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_54_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_54_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_54_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_54_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_54_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_54_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_54_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_54_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_54_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_54_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_54_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_55_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_55_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_55_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_55_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_55_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_55_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_55_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_55_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_55_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_55_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_55_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_55_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_55_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_55_6,tmpq512);

	// Final reconstruction
	carry = _mm512_srli_epi64(tmpZero512l0,52);
	tmpZero512h0 = _mm512_add_epi64(carry,tmpZero512h0);
	carry = _mm512_srli_epi64(tmpZero512l1,52);
	tmpZero512h1 = _mm512_add_epi64(carry,tmpZero512h1);
	carry = _mm512_srli_epi64(tmpZero512l2,52);
	tmpZero512h2 = _mm512_add_epi64(carry,tmpZero512h2);
	carry = _mm512_srli_epi64(tmpZero512l3,52);
	tmpZero512h3 = _mm512_add_epi64(carry,tmpZero512h3);
	carry = _mm512_srli_epi64(tmpZero512l4,52);
	tmpZero512h4 = _mm512_add_epi64(carry,tmpZero512h4);
	carry = _mm512_srli_epi64(tmpZero512l5,52);
	tmpZero512h5 = _mm512_add_epi64(carry,tmpZero512h5);
	carry = _mm512_srli_epi64(tmpZero512l6,52);
	tmpZero512h6 = _mm512_add_epi64(carry,tmpZero512h6);

	_mm512_store_epi64(rop,tmpZero512h0);
	_mm512_store_epi64(rop+8,tmpZero512h1);
	_mm512_store_epi64(rop+16,tmpZero512h2);
	_mm512_store_epi64(rop+24,tmpZero512h3);
	_mm512_store_epi64(rop+32,tmpZero512h4);
	_mm512_store_epi64(rop+40,tmpZero512h5);
	_mm512_store_epi64(rop+48,tmpZero512h6);


}

#define idx_opl (__m512i){0UL,2UL,4UL,6UL,0x8UL,0xAUL,0xCUL,0xEUL}
#define idx_oph (__m512i){0x1UL,0x3UL,0x5UL,0x7UL,0x9UL,0xBUL,0xDUL,0xFUL}

inline void internal_reduction_512(int64_t *rop, int128 *op){

	__m512i carry;

	__m512i acc512l0 = zero512, acc512l1 = zero512, acc512l2 = zero512, acc512l3 = zero512, acc512l4 = zero512, acc512l5 = zero512, acc512l6 = zero512 ;

	__m512i acc512h0 = zero512, acc512h1 = zero512, acc512h2 = zero512, acc512h3 = zero512, acc512h4 = zero512, acc512h5 = zero512, acc512h6 = zero512 ;


	//Computation of Q
	//~ computation of : op*neg_inv_ri_rep_coeff mod(E, mont_phi)

	__m512i opl512 = _mm512_set1_epi64((uint64_t)op[0]);
	__m512i q512_0 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_0);
	__m512i q512_1 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_1);
	__m512i q512_2 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_2);
	__m512i q512_3 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_3);
	__m512i q512_4 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_4);
	__m512i q512_5 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_5);
	__m512i q512_6 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[1]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_1_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_1_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_1_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_1_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_1_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_1_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_1_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[2]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_2_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_2_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_2_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_2_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_2_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_2_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_2_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[3]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_3_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_3_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_3_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_3_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_3_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_3_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_3_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[4]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_4_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_4_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_4_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_4_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_4_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_4_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_4_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[5]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_5_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_5_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_5_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_5_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_5_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_5_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_5_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[6]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_6_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_6_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_6_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_6_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_6_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_6_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_6_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[7]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_7_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_7_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_7_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_7_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_7_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_7_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_7_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[8]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_8_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_8_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_8_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_8_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_8_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_8_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_8_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[9]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_9_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_9_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_9_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_9_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_9_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_9_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_9_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[10]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_10_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_10_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_10_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_10_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_10_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_10_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_10_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[11]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_11_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_11_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_11_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_11_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_11_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_11_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_11_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[12]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_12_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_12_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_12_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_12_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_12_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_12_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_12_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[13]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_13_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_13_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_13_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_13_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_13_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_13_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_13_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[14]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_14_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_14_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_14_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_14_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_14_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_14_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_14_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[15]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_15_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_15_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_15_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_15_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_15_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_15_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_15_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[16]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_16_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_16_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_16_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_16_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_16_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_16_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_16_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[17]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_17_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_17_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_17_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_17_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_17_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_17_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_17_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[18]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_18_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_18_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_18_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_18_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_18_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_18_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_18_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[19]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_19_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_19_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_19_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_19_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_19_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_19_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_19_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[20]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_20_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_20_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_20_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_20_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_20_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_20_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_20_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[21]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_21_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_21_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_21_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_21_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_21_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_21_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_21_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[22]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_22_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_22_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_22_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_22_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_22_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_22_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_22_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[23]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_23_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_23_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_23_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_23_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_23_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_23_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_23_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[24]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_24_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_24_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_24_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_24_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_24_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_24_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_24_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[25]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_25_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_25_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_25_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_25_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_25_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_25_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_25_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[26]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_26_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_26_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_26_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_26_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_26_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_26_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_26_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[27]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_27_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_27_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_27_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_27_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_27_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_27_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_27_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[28]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_28_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_28_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_28_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_28_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_28_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_28_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_28_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[29]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_29_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_29_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_29_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_29_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_29_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_29_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_29_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[30]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_30_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_30_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_30_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_30_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_30_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_30_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_30_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[31]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_31_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_31_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_31_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_31_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_31_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_31_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_31_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[32]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_32_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_32_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_32_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_32_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_32_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_32_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_32_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[33]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_33_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_33_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_33_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_33_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_33_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_33_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_33_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[34]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_34_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_34_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_34_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_34_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_34_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_34_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_34_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[35]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_35_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_35_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_35_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_35_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_35_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_35_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_35_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[36]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_36_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_36_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_36_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_36_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_36_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_36_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_36_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[37]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_37_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_37_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_37_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_37_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_37_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_37_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_37_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[38]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_38_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_38_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_38_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_38_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_38_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_38_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_38_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[39]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_39_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_39_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_39_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_39_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_39_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_39_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_39_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[40]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_40_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_40_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_40_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_40_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_40_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_40_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_40_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[41]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_41_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_41_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_41_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_41_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_41_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_41_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_41_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[42]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_42_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_42_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_42_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_42_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_42_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_42_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_42_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[43]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_43_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_43_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_43_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_43_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_43_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_43_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_43_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[44]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_44_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_44_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_44_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_44_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_44_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_44_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_44_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[45]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_45_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_45_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_45_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_45_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_45_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_45_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_45_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[46]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_46_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_46_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_46_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_46_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_46_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_46_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_46_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[47]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_47_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_47_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_47_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_47_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_47_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_47_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_47_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[48]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_48_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_48_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_48_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_48_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_48_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_48_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_48_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[49]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_49_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_49_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_49_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_49_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_49_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_49_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_49_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[50]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_50_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_50_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_50_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_50_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_50_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_50_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_50_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[51]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_51_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_51_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_51_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_51_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_51_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_51_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_51_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[52]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_52_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_52_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_52_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_52_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_52_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_52_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_52_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[53]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_53_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_53_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_53_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_53_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_53_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_53_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_53_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[54]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_54_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_54_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_54_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_54_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_54_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_54_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_54_6);

	opl512 = _mm512_set1_epi64((uint64_t)op[55]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_55_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_55_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_55_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_55_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_55_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_55_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_55_6);

	//~ computation of : Q*red_int_coeff mod(E)

	__m512i tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_0);
	__m512i tmpZero512l0 = _mm512_madd52lo_epu64(acc512l0,KZ_0_0,tmpq512);
	__m512i tmpZero512l1 = _mm512_madd52lo_epu64(acc512l1,KZ_0_1,tmpq512);
	__m512i tmpZero512l2 = _mm512_madd52lo_epu64(acc512l2,KZ_0_2,tmpq512);
	__m512i tmpZero512l3 = _mm512_madd52lo_epu64(acc512l3,KZ_0_3,tmpq512);
	__m512i tmpZero512l4 = _mm512_madd52lo_epu64(acc512l4,KZ_0_4,tmpq512);
	__m512i tmpZero512l5 = _mm512_madd52lo_epu64(acc512l5,KZ_0_5,tmpq512);
	__m512i tmpZero512l6 = _mm512_madd52lo_epu64(acc512l6,KZ_0_6,tmpq512);
	__m512i tmpZero512h0 = _mm512_madd52hi_epu64(acc512h0,KZ_0_0,tmpq512);
	__m512i tmpZero512h1 = _mm512_madd52hi_epu64(acc512h1,KZ_0_1,tmpq512);
	__m512i tmpZero512h2 = _mm512_madd52hi_epu64(acc512h2,KZ_0_2,tmpq512);
	__m512i tmpZero512h3 = _mm512_madd52hi_epu64(acc512h3,KZ_0_3,tmpq512);
	__m512i tmpZero512h4 = _mm512_madd52hi_epu64(acc512h4,KZ_0_4,tmpq512);
	__m512i tmpZero512h5 = _mm512_madd52hi_epu64(acc512h5,KZ_0_5,tmpq512);
	__m512i tmpZero512h6 = _mm512_madd52hi_epu64(acc512h6,KZ_0_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_1_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_1_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_1_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_1_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_1_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_1_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_1_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_1_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_1_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_1_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_1_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_1_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_1_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_1_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_2_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_2_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_2_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_2_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_2_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_2_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_2_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_2_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_2_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_2_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_2_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_2_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_2_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_2_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_3_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_3_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_3_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_3_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_3_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_3_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_3_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_3_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_3_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_3_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_3_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_3_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_3_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_3_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_4_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_4_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_4_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_4_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_4_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_4_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_4_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_4_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_4_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_4_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_4_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_4_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_4_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_4_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_5_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_5_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_5_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_5_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_5_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_5_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_5_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_5_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_5_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_5_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_5_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_5_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_5_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_5_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_6_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_6_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_6_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_6_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_6_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_6_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_6_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_6_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_6_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_6_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_6_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_6_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_6_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_6_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_7_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_7_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_7_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_7_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_7_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_7_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_7_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_7_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_7_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_7_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_7_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_7_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_7_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_7_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_8_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_8_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_8_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_8_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_8_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_8_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_8_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_8_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_8_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_8_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_8_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_8_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_8_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_8_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_9_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_9_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_9_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_9_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_9_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_9_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_9_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_9_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_9_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_9_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_9_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_9_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_9_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_9_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_10_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_10_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_10_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_10_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_10_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_10_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_10_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_10_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_10_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_10_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_10_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_10_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_10_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_10_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_11_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_11_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_11_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_11_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_11_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_11_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_11_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_11_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_11_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_11_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_11_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_11_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_11_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_11_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_12_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_12_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_12_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_12_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_12_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_12_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_12_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_12_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_12_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_12_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_12_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_12_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_12_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_12_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_13_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_13_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_13_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_13_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_13_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_13_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_13_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_13_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_13_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_13_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_13_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_13_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_13_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_13_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_14_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_14_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_14_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_14_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_14_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_14_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_14_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_14_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_14_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_14_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_14_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_14_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_14_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_14_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_15_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_15_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_15_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_15_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_15_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_15_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_15_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_15_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_15_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_15_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_15_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_15_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_15_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_15_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_16_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_16_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_16_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_16_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_16_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_16_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_16_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_16_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_16_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_16_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_16_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_16_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_16_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_16_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_17_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_17_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_17_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_17_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_17_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_17_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_17_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_17_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_17_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_17_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_17_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_17_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_17_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_17_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_18_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_18_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_18_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_18_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_18_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_18_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_18_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_18_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_18_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_18_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_18_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_18_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_18_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_18_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_19_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_19_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_19_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_19_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_19_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_19_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_19_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_19_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_19_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_19_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_19_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_19_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_19_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_19_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_20_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_20_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_20_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_20_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_20_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_20_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_20_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_20_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_20_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_20_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_20_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_20_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_20_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_20_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_21_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_21_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_21_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_21_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_21_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_21_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_21_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_21_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_21_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_21_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_21_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_21_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_21_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_21_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_22_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_22_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_22_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_22_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_22_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_22_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_22_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_22_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_22_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_22_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_22_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_22_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_22_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_22_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_23_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_23_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_23_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_23_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_23_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_23_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_23_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_23_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_23_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_23_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_23_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_23_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_23_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_23_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_24_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_24_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_24_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_24_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_24_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_24_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_24_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_24_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_24_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_24_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_24_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_24_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_24_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_24_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_25_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_25_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_25_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_25_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_25_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_25_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_25_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_25_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_25_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_25_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_25_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_25_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_25_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_25_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_26_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_26_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_26_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_26_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_26_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_26_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_26_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_26_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_26_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_26_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_26_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_26_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_26_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_26_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_27_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_27_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_27_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_27_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_27_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_27_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_27_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_27_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_27_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_27_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_27_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_27_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_27_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_27_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_28_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_28_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_28_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_28_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_28_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_28_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_28_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_28_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_28_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_28_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_28_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_28_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_28_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_28_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_29_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_29_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_29_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_29_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_29_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_29_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_29_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_29_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_29_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_29_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_29_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_29_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_29_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_29_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_30_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_30_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_30_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_30_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_30_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_30_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_30_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_30_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_30_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_30_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_30_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_30_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_30_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_30_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_31_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_31_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_31_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_31_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_31_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_31_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_31_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_31_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_31_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_31_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_31_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_31_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_31_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_31_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_32_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_32_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_32_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_32_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_32_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_32_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_32_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_32_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_32_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_32_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_32_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_32_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_32_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_32_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_33_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_33_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_33_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_33_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_33_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_33_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_33_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_33_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_33_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_33_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_33_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_33_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_33_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_33_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_34_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_34_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_34_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_34_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_34_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_34_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_34_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_34_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_34_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_34_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_34_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_34_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_34_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_34_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_35_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_35_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_35_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_35_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_35_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_35_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_35_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_35_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_35_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_35_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_35_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_35_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_35_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_35_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_36_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_36_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_36_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_36_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_36_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_36_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_36_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_36_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_36_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_36_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_36_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_36_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_36_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_36_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_37_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_37_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_37_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_37_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_37_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_37_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_37_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_37_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_37_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_37_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_37_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_37_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_37_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_37_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_38_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_38_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_38_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_38_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_38_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_38_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_38_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_38_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_38_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_38_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_38_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_38_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_38_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_38_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_39_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_39_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_39_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_39_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_39_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_39_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_39_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_39_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_39_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_39_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_39_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_39_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_39_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_39_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_40_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_40_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_40_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_40_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_40_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_40_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_40_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_40_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_40_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_40_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_40_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_40_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_40_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_40_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_41_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_41_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_41_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_41_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_41_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_41_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_41_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_41_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_41_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_41_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_41_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_41_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_41_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_41_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_42_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_42_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_42_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_42_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_42_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_42_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_42_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_42_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_42_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_42_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_42_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_42_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_42_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_42_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_43_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_43_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_43_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_43_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_43_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_43_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_43_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_43_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_43_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_43_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_43_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_43_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_43_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_43_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_44_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_44_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_44_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_44_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_44_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_44_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_44_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_44_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_44_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_44_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_44_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_44_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_44_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_44_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_45_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_45_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_45_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_45_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_45_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_45_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_45_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_45_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_45_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_45_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_45_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_45_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_45_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_45_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_46_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_46_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_46_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_46_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_46_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_46_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_46_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_46_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_46_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_46_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_46_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_46_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_46_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_46_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_47_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_47_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_47_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_47_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_47_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_47_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_47_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_47_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_47_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_47_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_47_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_47_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_47_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_47_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_48_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_48_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_48_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_48_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_48_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_48_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_48_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_48_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_48_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_48_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_48_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_48_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_48_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_48_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_49_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_49_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_49_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_49_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_49_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_49_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_49_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_49_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_49_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_49_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_49_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_49_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_49_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_49_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_50_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_50_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_50_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_50_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_50_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_50_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_50_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_50_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_50_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_50_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_50_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_50_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_50_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_50_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_51_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_51_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_51_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_51_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_51_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_51_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_51_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_51_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_51_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_51_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_51_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_51_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_51_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_51_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_52_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_52_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_52_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_52_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_52_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_52_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_52_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_52_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_52_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_52_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_52_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_52_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_52_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_52_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_53_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_53_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_53_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_53_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_53_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_53_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_53_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_53_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_53_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_53_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_53_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_53_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_53_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_53_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_54_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_54_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_54_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_54_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_54_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_54_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_54_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_54_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_54_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_54_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_54_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_54_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_54_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_54_6,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_55_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_55_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_55_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_55_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_55_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_55_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_55_6,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_55_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_55_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_55_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_55_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_55_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_55_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_55_6,tmpq512);

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
	carry = _mm512_srli_epi64(tmpZero512l4,52);
	tmpZero512h4 = _mm512_add_epi64(carry,tmpZero512h4);
	carry = _mm512_srli_epi64(tmpZero512l5,52);
	tmpZero512h5 = _mm512_add_epi64(carry,tmpZero512h5);
	carry = _mm512_srli_epi64(tmpZero512l6,52);
	tmpZero512h6 = _mm512_add_epi64(carry,tmpZero512h6);

	_mm512_store_epi64(rop,tmpZero512h0);
	_mm512_store_epi64(rop+8,tmpZero512h1);
	_mm512_store_epi64(rop+16,tmpZero512h2);
	_mm512_store_epi64(rop+24,tmpZero512h3);
	_mm512_store_epi64(rop+32,tmpZero512h4);
	_mm512_store_epi64(rop+40,tmpZero512h5);
	_mm512_store_epi64(rop+48,tmpZero512h6);


}
