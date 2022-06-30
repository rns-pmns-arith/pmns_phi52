#define zero512 (__m512i){0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}
#define idx_a0 (__m512i){0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL,0x8UL}
#define idx_a1 (__m512i){0x1UL,0x2UL,0x3UL,0x8UL,0x8UL,0x8UL,0x8UL,0x8UL}
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

#define idx_c92 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c93 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c94 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c95 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c96 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c97 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c98 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c99 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c100 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c101 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c102 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c103 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c104 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c105 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c106 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c107 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c108 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c109 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c110 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c111 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c112 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c113 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c114 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c115 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c116 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c117 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c118 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c119 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c120 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c121 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c122 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c123 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c124 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c125 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c126 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c127 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c128 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c129 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c130 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c131 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c132 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c133 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c134 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c135 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c136 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c137 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c138 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c139 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c140 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c141 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c142 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c143 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c144 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c145 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c146 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c147 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c148 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c149 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c150 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c151 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c152 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c153 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c154 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c155 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c156 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c157 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c158 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c159 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c160 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c161 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c162 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c163 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c164 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c165 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c166 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c167 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c168 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c169 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c170 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c171 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c172 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c173 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c174 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c175 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0xBUL,0x5UL,0x6UL,0x7UL}
#define idx_c176 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xCUL,0x6UL,0x7UL}
#define idx_c177 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xDUL,0x7UL}
#define idx_c178 (__m512i){0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0x0UL,0xEUL}
#define idx_c179 (__m512i){0xFUL,0x1UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c180 (__m512i){0x0UL,0x8UL,0x2UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c181 (__m512i){0x0UL,0x0UL,0x9UL,0x3UL,0x4UL,0x5UL,0x6UL,0x7UL}
#define idx_c182 (__m512i){0x0UL,0x0UL,0x0UL,0xAUL,0x4UL,0x5UL,0x6UL,0x7UL}

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
	pa512[7] = _mm512_loadu_epi64(pa+56);
	pa512[8] = _mm512_loadu_epi64(pa+64);
	pa512[9] = _mm512_loadu_epi64(pa+72);
	pa512[10] = _mm512_loadu_epi64(pa+80);
	pa512[11] = _mm512_loadu_epi64(pa+88);
	__m512i tmp512_0, tmp512_1, tmp512_2, tmp512_3, tmp512_4, tmp512_5, tmp512_6, tmp512_7, tmp512_8, tmp512_9, tmp512_10 ;


	__m512i acc512l0 = zero512, cx512l0 = zero512, acc512l1 = zero512, cx512l1 = zero512, acc512l2 = zero512, cx512l2 = zero512, acc512l3 = zero512, cx512l3 = zero512, acc512l4 = zero512, cx512l4 = zero512, acc512l5 = zero512, cx512l5 = zero512, acc512l6 = zero512, cx512l6 = zero512, acc512l7 = zero512, cx512l7 = zero512, acc512l8 = zero512, cx512l8 = zero512, acc512l9 = zero512, cx512l9 = zero512, acc512l10 = zero512, cx512l10 = zero512, acc512l11 = zero512, cx512l11 = zero512 ;

	__m512i acc512h0 = zero512, cx512h0 = zero512, acc512h1 = zero512, cx512h1 = zero512, acc512h2 = zero512, cx512h2 = zero512, acc512h3 = zero512, cx512h3 = zero512, acc512h4 = zero512, cx512h4 = zero512, acc512h5 = zero512, cx512h5 = zero512, acc512h6 = zero512, cx512h6 = zero512, acc512h7 = zero512, cx512h7 = zero512, acc512h8 = zero512, cx512h8 = zero512, acc512h9 = zero512, cx512h9 = zero512, acc512h10 = zero512, cx512h10 = zero512, acc512h11 = zero512, cx512h11 = zero512 ;

	tmp512_b = _mm512_set1_epi64(pb[91]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l11 = _mm512_permutex2var_epi64(cx512l11,idx_c182,acc512l11);
	cx512h11 = _mm512_permutex2var_epi64(cx512h11,idx_c182,acc512h11);

	tmp512_b = _mm512_set1_epi64(pb[90]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l11 = _mm512_permutex2var_epi64(cx512l11,idx_c181,acc512l11);
	cx512h11 = _mm512_permutex2var_epi64(cx512h11,idx_c181,acc512h11);

	tmp512_b = _mm512_set1_epi64(pb[89]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l11 = _mm512_permutex2var_epi64(cx512l11,idx_c180,acc512l11);
	cx512h11 = _mm512_permutex2var_epi64(cx512h11,idx_c180,acc512h11);

	tmp512_b = _mm512_set1_epi64(pb[88]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l11 = _mm512_permutex2var_epi64(cx512l11,idx_c179,acc512l10);
	cx512h11 = _mm512_permutex2var_epi64(cx512h11,idx_c179,acc512h10);

	tmp512_b = _mm512_set1_epi64(pb[87]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l10 = _mm512_permutex2var_epi64(cx512l10,idx_c178,acc512l10);
	cx512h10 = _mm512_permutex2var_epi64(cx512h10,idx_c178,acc512h10);

	tmp512_b = _mm512_set1_epi64(pb[86]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l10 = _mm512_permutex2var_epi64(cx512l10,idx_c177,acc512l10);
	cx512h10 = _mm512_permutex2var_epi64(cx512h10,idx_c177,acc512h10);

	tmp512_b = _mm512_set1_epi64(pb[85]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l10 = _mm512_permutex2var_epi64(cx512l10,idx_c176,acc512l10);
	cx512h10 = _mm512_permutex2var_epi64(cx512h10,idx_c176,acc512h10);

	tmp512_b = _mm512_set1_epi64(pb[84]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l10 = _mm512_permutex2var_epi64(cx512l10,idx_c175,acc512l10);
	cx512h10 = _mm512_permutex2var_epi64(cx512h10,idx_c175,acc512h10);

	tmp512_b = _mm512_set1_epi64(pb[83]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l10 = _mm512_permutex2var_epi64(cx512l10,idx_c174,acc512l10);
	cx512h10 = _mm512_permutex2var_epi64(cx512h10,idx_c174,acc512h10);

	tmp512_b = _mm512_set1_epi64(pb[82]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l10 = _mm512_permutex2var_epi64(cx512l10,idx_c173,acc512l10);
	cx512h10 = _mm512_permutex2var_epi64(cx512h10,idx_c173,acc512h10);

	tmp512_b = _mm512_set1_epi64(pb[81]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l10 = _mm512_permutex2var_epi64(cx512l10,idx_c172,acc512l10);
	cx512h10 = _mm512_permutex2var_epi64(cx512h10,idx_c172,acc512h10);

	tmp512_b = _mm512_set1_epi64(pb[80]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l10 = _mm512_permutex2var_epi64(cx512l10,idx_c171,acc512l9);
	cx512h10 = _mm512_permutex2var_epi64(cx512h10,idx_c171,acc512h9);

	tmp512_b = _mm512_set1_epi64(pb[79]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l9 = _mm512_permutex2var_epi64(cx512l9,idx_c170,acc512l9);
	cx512h9 = _mm512_permutex2var_epi64(cx512h9,idx_c170,acc512h9);

	tmp512_b = _mm512_set1_epi64(pb[78]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l9 = _mm512_permutex2var_epi64(cx512l9,idx_c169,acc512l9);
	cx512h9 = _mm512_permutex2var_epi64(cx512h9,idx_c169,acc512h9);

	tmp512_b = _mm512_set1_epi64(pb[77]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l9 = _mm512_permutex2var_epi64(cx512l9,idx_c168,acc512l9);
	cx512h9 = _mm512_permutex2var_epi64(cx512h9,idx_c168,acc512h9);

	tmp512_b = _mm512_set1_epi64(pb[76]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l9 = _mm512_permutex2var_epi64(cx512l9,idx_c167,acc512l9);
	cx512h9 = _mm512_permutex2var_epi64(cx512h9,idx_c167,acc512h9);

	tmp512_b = _mm512_set1_epi64(pb[75]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l9 = _mm512_permutex2var_epi64(cx512l9,idx_c166,acc512l9);
	cx512h9 = _mm512_permutex2var_epi64(cx512h9,idx_c166,acc512h9);

	tmp512_b = _mm512_set1_epi64(pb[74]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l9 = _mm512_permutex2var_epi64(cx512l9,idx_c165,acc512l9);
	cx512h9 = _mm512_permutex2var_epi64(cx512h9,idx_c165,acc512h9);

	tmp512_b = _mm512_set1_epi64(pb[73]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l9 = _mm512_permutex2var_epi64(cx512l9,idx_c164,acc512l9);
	cx512h9 = _mm512_permutex2var_epi64(cx512h9,idx_c164,acc512h9);

	tmp512_b = _mm512_set1_epi64(pb[72]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l9 = _mm512_permutex2var_epi64(cx512l9,idx_c163,acc512l8);
	cx512h9 = _mm512_permutex2var_epi64(cx512h9,idx_c163,acc512h8);

	tmp512_b = _mm512_set1_epi64(pb[71]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l8 = _mm512_permutex2var_epi64(cx512l8,idx_c162,acc512l8);
	cx512h8 = _mm512_permutex2var_epi64(cx512h8,idx_c162,acc512h8);

	tmp512_b = _mm512_set1_epi64(pb[70]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l8 = _mm512_permutex2var_epi64(cx512l8,idx_c161,acc512l8);
	cx512h8 = _mm512_permutex2var_epi64(cx512h8,idx_c161,acc512h8);

	tmp512_b = _mm512_set1_epi64(pb[69]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l8 = _mm512_permutex2var_epi64(cx512l8,idx_c160,acc512l8);
	cx512h8 = _mm512_permutex2var_epi64(cx512h8,idx_c160,acc512h8);

	tmp512_b = _mm512_set1_epi64(pb[68]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l8 = _mm512_permutex2var_epi64(cx512l8,idx_c159,acc512l8);
	cx512h8 = _mm512_permutex2var_epi64(cx512h8,idx_c159,acc512h8);

	tmp512_b = _mm512_set1_epi64(pb[67]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l8 = _mm512_permutex2var_epi64(cx512l8,idx_c158,acc512l8);
	cx512h8 = _mm512_permutex2var_epi64(cx512h8,idx_c158,acc512h8);

	tmp512_b = _mm512_set1_epi64(pb[66]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l8 = _mm512_permutex2var_epi64(cx512l8,idx_c157,acc512l8);
	cx512h8 = _mm512_permutex2var_epi64(cx512h8,idx_c157,acc512h8);

	tmp512_b = _mm512_set1_epi64(pb[65]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l8 = _mm512_permutex2var_epi64(cx512l8,idx_c156,acc512l8);
	cx512h8 = _mm512_permutex2var_epi64(cx512h8,idx_c156,acc512h8);

	tmp512_b = _mm512_set1_epi64(pb[64]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l8 = _mm512_permutex2var_epi64(cx512l8,idx_c155,acc512l7);
	cx512h8 = _mm512_permutex2var_epi64(cx512h8,idx_c155,acc512h7);

	tmp512_b = _mm512_set1_epi64(pb[63]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l7 = _mm512_permutex2var_epi64(cx512l7,idx_c154,acc512l7);
	cx512h7 = _mm512_permutex2var_epi64(cx512h7,idx_c154,acc512h7);

	tmp512_b = _mm512_set1_epi64(pb[62]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l7 = _mm512_permutex2var_epi64(cx512l7,idx_c153,acc512l7);
	cx512h7 = _mm512_permutex2var_epi64(cx512h7,idx_c153,acc512h7);

	tmp512_b = _mm512_set1_epi64(pb[61]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l7 = _mm512_permutex2var_epi64(cx512l7,idx_c152,acc512l7);
	cx512h7 = _mm512_permutex2var_epi64(cx512h7,idx_c152,acc512h7);

	tmp512_b = _mm512_set1_epi64(pb[60]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l7 = _mm512_permutex2var_epi64(cx512l7,idx_c151,acc512l7);
	cx512h7 = _mm512_permutex2var_epi64(cx512h7,idx_c151,acc512h7);

	tmp512_b = _mm512_set1_epi64(pb[59]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l7 = _mm512_permutex2var_epi64(cx512l7,idx_c150,acc512l7);
	cx512h7 = _mm512_permutex2var_epi64(cx512h7,idx_c150,acc512h7);

	tmp512_b = _mm512_set1_epi64(pb[58]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l7 = _mm512_permutex2var_epi64(cx512l7,idx_c149,acc512l7);
	cx512h7 = _mm512_permutex2var_epi64(cx512h7,idx_c149,acc512h7);

	tmp512_b = _mm512_set1_epi64(pb[57]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l7 = _mm512_permutex2var_epi64(cx512l7,idx_c148,acc512l7);
	cx512h7 = _mm512_permutex2var_epi64(cx512h7,idx_c148,acc512h7);

	tmp512_b = _mm512_set1_epi64(pb[56]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l7 = _mm512_permutex2var_epi64(cx512l7,idx_c147,acc512l6);
	cx512h7 = _mm512_permutex2var_epi64(cx512h7,idx_c147,acc512h6);

	tmp512_b = _mm512_set1_epi64(pb[55]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l6 = _mm512_permutex2var_epi64(cx512l6,idx_c146,acc512l6);
	cx512h6 = _mm512_permutex2var_epi64(cx512h6,idx_c146,acc512h6);

	tmp512_b = _mm512_set1_epi64(pb[54]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l6 = _mm512_permutex2var_epi64(cx512l6,idx_c145,acc512l6);
	cx512h6 = _mm512_permutex2var_epi64(cx512h6,idx_c145,acc512h6);

	tmp512_b = _mm512_set1_epi64(pb[53]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l6 = _mm512_permutex2var_epi64(cx512l6,idx_c144,acc512l6);
	cx512h6 = _mm512_permutex2var_epi64(cx512h6,idx_c144,acc512h6);

	tmp512_b = _mm512_set1_epi64(pb[52]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l6 = _mm512_permutex2var_epi64(cx512l6,idx_c143,acc512l6);
	cx512h6 = _mm512_permutex2var_epi64(cx512h6,idx_c143,acc512h6);

	tmp512_b = _mm512_set1_epi64(pb[51]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l6 = _mm512_permutex2var_epi64(cx512l6,idx_c142,acc512l6);
	cx512h6 = _mm512_permutex2var_epi64(cx512h6,idx_c142,acc512h6);

	tmp512_b = _mm512_set1_epi64(pb[50]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l6 = _mm512_permutex2var_epi64(cx512l6,idx_c141,acc512l6);
	cx512h6 = _mm512_permutex2var_epi64(cx512h6,idx_c141,acc512h6);

	tmp512_b = _mm512_set1_epi64(pb[49]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l6 = _mm512_permutex2var_epi64(cx512l6,idx_c140,acc512l6);
	cx512h6 = _mm512_permutex2var_epi64(cx512h6,idx_c140,acc512h6);

	tmp512_b = _mm512_set1_epi64(pb[48]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l6 = _mm512_permutex2var_epi64(cx512l6,idx_c139,acc512l5);
	cx512h6 = _mm512_permutex2var_epi64(cx512h6,idx_c139,acc512h5);

	tmp512_b = _mm512_set1_epi64(pb[47]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l5 = _mm512_permutex2var_epi64(cx512l5,idx_c138,acc512l5);
	cx512h5 = _mm512_permutex2var_epi64(cx512h5,idx_c138,acc512h5);

	tmp512_b = _mm512_set1_epi64(pb[46]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l5 = _mm512_permutex2var_epi64(cx512l5,idx_c137,acc512l5);
	cx512h5 = _mm512_permutex2var_epi64(cx512h5,idx_c137,acc512h5);

	tmp512_b = _mm512_set1_epi64(pb[45]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l5 = _mm512_permutex2var_epi64(cx512l5,idx_c136,acc512l5);
	cx512h5 = _mm512_permutex2var_epi64(cx512h5,idx_c136,acc512h5);

	tmp512_b = _mm512_set1_epi64(pb[44]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l5 = _mm512_permutex2var_epi64(cx512l5,idx_c135,acc512l5);
	cx512h5 = _mm512_permutex2var_epi64(cx512h5,idx_c135,acc512h5);

	tmp512_b = _mm512_set1_epi64(pb[43]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l5 = _mm512_permutex2var_epi64(cx512l5,idx_c134,acc512l5);
	cx512h5 = _mm512_permutex2var_epi64(cx512h5,idx_c134,acc512h5);

	tmp512_b = _mm512_set1_epi64(pb[42]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l5 = _mm512_permutex2var_epi64(cx512l5,idx_c133,acc512l5);
	cx512h5 = _mm512_permutex2var_epi64(cx512h5,idx_c133,acc512h5);

	tmp512_b = _mm512_set1_epi64(pb[41]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l5 = _mm512_permutex2var_epi64(cx512l5,idx_c132,acc512l5);
	cx512h5 = _mm512_permutex2var_epi64(cx512h5,idx_c132,acc512h5);

	tmp512_b = _mm512_set1_epi64(pb[40]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l5 = _mm512_permutex2var_epi64(cx512l5,idx_c131,acc512l4);
	cx512h5 = _mm512_permutex2var_epi64(cx512h5,idx_c131,acc512h4);

	tmp512_b = _mm512_set1_epi64(pb[39]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l4 = _mm512_permutex2var_epi64(cx512l4,idx_c130,acc512l4);
	cx512h4 = _mm512_permutex2var_epi64(cx512h4,idx_c130,acc512h4);

	tmp512_b = _mm512_set1_epi64(pb[38]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l4 = _mm512_permutex2var_epi64(cx512l4,idx_c129,acc512l4);
	cx512h4 = _mm512_permutex2var_epi64(cx512h4,idx_c129,acc512h4);

	tmp512_b = _mm512_set1_epi64(pb[37]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l4 = _mm512_permutex2var_epi64(cx512l4,idx_c128,acc512l4);
	cx512h4 = _mm512_permutex2var_epi64(cx512h4,idx_c128,acc512h4);

	tmp512_b = _mm512_set1_epi64(pb[36]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l4 = _mm512_permutex2var_epi64(cx512l4,idx_c127,acc512l4);
	cx512h4 = _mm512_permutex2var_epi64(cx512h4,idx_c127,acc512h4);

	tmp512_b = _mm512_set1_epi64(pb[35]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l4 = _mm512_permutex2var_epi64(cx512l4,idx_c126,acc512l4);
	cx512h4 = _mm512_permutex2var_epi64(cx512h4,idx_c126,acc512h4);

	tmp512_b = _mm512_set1_epi64(pb[34]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l4 = _mm512_permutex2var_epi64(cx512l4,idx_c125,acc512l4);
	cx512h4 = _mm512_permutex2var_epi64(cx512h4,idx_c125,acc512h4);

	tmp512_b = _mm512_set1_epi64(pb[33]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l4 = _mm512_permutex2var_epi64(cx512l4,idx_c124,acc512l4);
	cx512h4 = _mm512_permutex2var_epi64(cx512h4,idx_c124,acc512h4);

	tmp512_b = _mm512_set1_epi64(pb[32]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l4 = _mm512_permutex2var_epi64(cx512l4,idx_c123,acc512l3);
	cx512h4 = _mm512_permutex2var_epi64(cx512h4,idx_c123,acc512h3);

	tmp512_b = _mm512_set1_epi64(pb[31]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l3 = _mm512_permutex2var_epi64(cx512l3,idx_c122,acc512l3);
	cx512h3 = _mm512_permutex2var_epi64(cx512h3,idx_c122,acc512h3);

	tmp512_b = _mm512_set1_epi64(pb[30]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l3 = _mm512_permutex2var_epi64(cx512l3,idx_c121,acc512l3);
	cx512h3 = _mm512_permutex2var_epi64(cx512h3,idx_c121,acc512h3);

	tmp512_b = _mm512_set1_epi64(pb[29]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l3 = _mm512_permutex2var_epi64(cx512l3,idx_c120,acc512l3);
	cx512h3 = _mm512_permutex2var_epi64(cx512h3,idx_c120,acc512h3);

	tmp512_b = _mm512_set1_epi64(pb[28]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l3 = _mm512_permutex2var_epi64(cx512l3,idx_c119,acc512l3);
	cx512h3 = _mm512_permutex2var_epi64(cx512h3,idx_c119,acc512h3);

	tmp512_b = _mm512_set1_epi64(pb[27]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l3 = _mm512_permutex2var_epi64(cx512l3,idx_c118,acc512l3);
	cx512h3 = _mm512_permutex2var_epi64(cx512h3,idx_c118,acc512h3);

	tmp512_b = _mm512_set1_epi64(pb[26]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l3 = _mm512_permutex2var_epi64(cx512l3,idx_c117,acc512l3);
	cx512h3 = _mm512_permutex2var_epi64(cx512h3,idx_c117,acc512h3);

	tmp512_b = _mm512_set1_epi64(pb[25]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l3 = _mm512_permutex2var_epi64(cx512l3,idx_c116,acc512l3);
	cx512h3 = _mm512_permutex2var_epi64(cx512h3,idx_c116,acc512h3);

	tmp512_b = _mm512_set1_epi64(pb[24]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l3 = _mm512_permutex2var_epi64(cx512l3,idx_c115,acc512l2);
	cx512h3 = _mm512_permutex2var_epi64(cx512h3,idx_c115,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[23]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c114,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c114,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[22]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c113,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c113,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[21]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c112,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c112,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[20]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c111,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c111,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[19]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c110,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c110,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[18]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c109,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c109,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[17]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c108,acc512l2);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c108,acc512h2);

	tmp512_b = _mm512_set1_epi64(pb[16]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l2 = _mm512_permutex2var_epi64(cx512l2,idx_c107,acc512l1);
	cx512h2 = _mm512_permutex2var_epi64(cx512h2,idx_c107,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[15]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c106,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c106,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[14]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c105,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c105,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[13]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c104,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c104,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[12]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c103,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c103,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[11]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c102,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c102,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[10]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c101,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c101,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[9]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c100,acc512l1);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c100,acc512h1);

	tmp512_b = _mm512_set1_epi64(pb[8]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l1 = _mm512_permutex2var_epi64(cx512l1,idx_c99,acc512l0);
	cx512h1 = _mm512_permutex2var_epi64(cx512h1,idx_c99,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[7]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c98,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c98,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[6]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c97,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c97,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[5]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c96,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c96,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[4]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c95,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c95,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[3]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c94,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c94,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[2]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c93,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c93,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[1]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

	cx512l0 = _mm512_permutex2var_epi64(cx512l0,idx_c92,acc512l0);
	cx512h0 = _mm512_permutex2var_epi64(cx512h0,idx_c92,acc512h0);

	tmp512_b = _mm512_set1_epi64(pb[0]);
	tmp512_0 = _mm512_permutex2var_epi64(pa512[0],idx_a0,pa512[1]);
	tmp512_1 = _mm512_permutex2var_epi64(pa512[1],idx_a0,pa512[2]);
	tmp512_2 = _mm512_permutex2var_epi64(pa512[2],idx_a0,pa512[3]);
	tmp512_3 = _mm512_permutex2var_epi64(pa512[3],idx_a0,pa512[4]);
	tmp512_4 = _mm512_permutex2var_epi64(pa512[4],idx_a0,pa512[5]);
	tmp512_5 = _mm512_permutex2var_epi64(pa512[5],idx_a0,pa512[6]);
	tmp512_6 = _mm512_permutex2var_epi64(pa512[6],idx_a0,pa512[7]);
	tmp512_7 = _mm512_permutex2var_epi64(pa512[7],idx_a0,pa512[8]);
	tmp512_8 = _mm512_permutex2var_epi64(pa512[8],idx_a0,pa512[9]);
	tmp512_9 = _mm512_permutex2var_epi64(pa512[9],idx_a0,pa512[10]);
	tmp512_10 = _mm512_permutex2var_epi64(pa512[10],idx_a0,pa512[11]);
	pa512[11] = _mm512_permutex2var_epi64(pa512[11],idx_a1,pa512[0]);
	pa512[0] = tmp512_0 ;
	pa512[1] = tmp512_1 ;
	pa512[2] = tmp512_2 ;
	pa512[3] = tmp512_3 ;
	pa512[4] = tmp512_4 ;
	pa512[5] = tmp512_5 ;
	pa512[6] = tmp512_6 ;
	pa512[7] = tmp512_7 ;
	pa512[8] = tmp512_8 ;
	pa512[9] = tmp512_9 ;
	pa512[10] = tmp512_10 ;

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

	acc512l7 = _mm512_madd52lo_epu64(acc512l7,pa512[7],tmp512_b);
	acc512h7 = _mm512_madd52hi_epu64(acc512h7,pa512[7],tmp512_b);

	acc512l8 = _mm512_madd52lo_epu64(acc512l8,pa512[8],tmp512_b);
	acc512h8 = _mm512_madd52hi_epu64(acc512h8,pa512[8],tmp512_b);

	acc512l9 = _mm512_madd52lo_epu64(acc512l9,pa512[9],tmp512_b);
	acc512h9 = _mm512_madd52hi_epu64(acc512h9,pa512[9],tmp512_b);

	acc512l10 = _mm512_madd52lo_epu64(acc512l10,pa512[10],tmp512_b);
	acc512h10 = _mm512_madd52hi_epu64(acc512h10,pa512[10],tmp512_b);

	acc512l11 = _mm512_madd52lo_epu64(acc512l11,pa512[11],tmp512_b);
	acc512h11 = _mm512_madd52hi_epu64(acc512h11,pa512[11],tmp512_b);

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

	acc512l7 = _mm512_add_epi64(acc512l7,cx512l7);
	acc512h7 = _mm512_add_epi64(acc512h7,cx512h7);

	acc512l8 = _mm512_add_epi64(acc512l8,cx512l8);
	acc512h8 = _mm512_add_epi64(acc512h8,cx512h8);

	acc512l9 = _mm512_add_epi64(acc512l9,cx512l9);
	acc512h9 = _mm512_add_epi64(acc512h9,cx512h9);

	acc512l10 = _mm512_add_epi64(acc512l10,cx512l10);
	acc512h10 = _mm512_add_epi64(acc512h10,cx512h10);

	acc512l11 = _mm512_add_epi64(acc512l11,cx512l11);
	acc512h11 = _mm512_add_epi64(acc512h11,cx512h11);

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
	__m512i q512_7 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_7);
	__m512i q512_8 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_8);
	__m512i q512_9 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_9);
	__m512i q512_10 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_10);
	__m512i q512_11 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_11);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_1_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_1_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_1_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_1_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_1_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_1_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_1_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_1_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_1_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_1_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_1_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_1_11);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_2_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_2_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_2_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_2_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_2_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_2_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_2_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_2_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_2_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_2_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_2_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_2_11);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_3_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_3_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_3_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_3_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_3_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_3_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_3_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_3_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_3_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_3_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_3_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_3_11);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_4_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_4_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_4_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_4_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_4_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_4_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_4_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_4_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_4_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_4_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_4_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_4_11);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_5_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_5_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_5_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_5_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_5_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_5_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_5_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_5_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_5_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_5_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_5_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_5_11);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_6_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_6_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_6_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_6_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_6_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_6_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_6_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_6_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_6_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_6_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_6_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_6_11);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l0);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_7_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_7_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_7_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_7_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_7_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_7_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_7_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_7_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_7_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_7_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_7_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_7_11);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_8_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_8_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_8_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_8_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_8_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_8_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_8_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_8_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_8_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_8_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_8_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_8_11);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_9_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_9_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_9_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_9_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_9_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_9_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_9_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_9_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_9_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_9_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_9_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_9_11);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_10_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_10_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_10_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_10_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_10_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_10_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_10_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_10_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_10_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_10_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_10_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_10_11);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_11_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_11_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_11_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_11_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_11_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_11_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_11_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_11_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_11_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_11_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_11_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_11_11);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_12_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_12_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_12_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_12_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_12_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_12_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_12_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_12_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_12_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_12_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_12_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_12_11);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_13_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_13_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_13_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_13_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_13_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_13_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_13_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_13_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_13_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_13_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_13_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_13_11);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_14_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_14_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_14_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_14_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_14_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_14_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_14_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_14_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_14_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_14_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_14_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_14_11);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l1);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_15_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_15_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_15_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_15_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_15_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_15_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_15_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_15_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_15_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_15_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_15_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_15_11);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_16_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_16_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_16_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_16_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_16_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_16_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_16_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_16_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_16_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_16_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_16_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_16_11);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_17_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_17_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_17_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_17_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_17_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_17_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_17_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_17_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_17_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_17_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_17_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_17_11);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_18_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_18_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_18_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_18_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_18_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_18_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_18_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_18_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_18_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_18_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_18_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_18_11);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_19_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_19_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_19_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_19_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_19_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_19_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_19_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_19_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_19_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_19_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_19_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_19_11);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_20_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_20_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_20_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_20_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_20_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_20_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_20_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_20_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_20_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_20_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_20_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_20_11);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_21_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_21_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_21_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_21_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_21_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_21_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_21_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_21_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_21_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_21_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_21_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_21_11);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_22_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_22_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_22_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_22_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_22_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_22_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_22_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_22_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_22_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_22_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_22_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_22_11);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l2);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_23_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_23_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_23_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_23_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_23_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_23_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_23_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_23_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_23_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_23_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_23_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_23_11);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l3);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_24_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_24_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_24_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_24_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_24_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_24_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_24_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_24_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_24_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_24_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_24_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_24_11);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l3);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_25_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_25_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_25_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_25_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_25_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_25_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_25_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_25_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_25_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_25_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_25_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_25_11);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l3);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_26_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_26_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_26_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_26_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_26_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_26_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_26_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_26_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_26_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_26_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_26_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_26_11);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l3);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_27_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_27_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_27_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_27_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_27_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_27_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_27_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_27_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_27_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_27_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_27_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_27_11);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l3);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_28_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_28_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_28_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_28_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_28_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_28_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_28_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_28_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_28_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_28_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_28_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_28_11);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l3);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_29_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_29_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_29_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_29_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_29_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_29_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_29_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_29_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_29_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_29_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_29_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_29_11);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l3);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_30_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_30_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_30_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_30_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_30_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_30_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_30_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_30_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_30_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_30_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_30_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_30_11);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l3);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_31_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_31_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_31_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_31_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_31_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_31_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_31_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_31_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_31_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_31_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_31_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_31_11);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l4);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_32_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_32_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_32_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_32_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_32_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_32_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_32_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_32_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_32_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_32_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_32_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_32_11);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l4);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_33_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_33_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_33_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_33_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_33_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_33_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_33_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_33_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_33_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_33_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_33_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_33_11);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l4);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_34_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_34_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_34_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_34_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_34_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_34_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_34_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_34_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_34_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_34_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_34_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_34_11);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l4);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_35_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_35_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_35_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_35_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_35_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_35_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_35_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_35_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_35_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_35_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_35_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_35_11);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l4);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_36_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_36_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_36_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_36_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_36_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_36_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_36_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_36_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_36_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_36_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_36_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_36_11);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l4);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_37_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_37_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_37_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_37_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_37_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_37_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_37_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_37_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_37_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_37_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_37_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_37_11);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l4);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_38_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_38_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_38_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_38_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_38_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_38_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_38_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_38_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_38_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_38_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_38_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_38_11);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l4);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_39_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_39_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_39_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_39_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_39_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_39_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_39_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_39_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_39_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_39_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_39_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_39_11);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l5);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_40_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_40_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_40_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_40_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_40_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_40_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_40_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_40_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_40_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_40_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_40_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_40_11);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l5);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_41_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_41_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_41_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_41_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_41_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_41_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_41_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_41_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_41_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_41_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_41_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_41_11);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l5);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_42_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_42_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_42_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_42_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_42_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_42_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_42_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_42_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_42_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_42_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_42_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_42_11);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l5);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_43_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_43_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_43_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_43_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_43_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_43_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_43_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_43_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_43_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_43_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_43_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_43_11);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l5);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_44_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_44_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_44_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_44_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_44_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_44_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_44_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_44_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_44_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_44_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_44_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_44_11);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l5);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_45_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_45_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_45_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_45_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_45_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_45_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_45_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_45_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_45_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_45_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_45_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_45_11);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l5);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_46_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_46_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_46_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_46_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_46_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_46_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_46_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_46_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_46_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_46_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_46_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_46_11);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l5);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_47_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_47_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_47_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_47_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_47_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_47_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_47_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_47_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_47_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_47_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_47_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_47_11);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l6);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_48_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_48_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_48_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_48_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_48_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_48_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_48_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_48_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_48_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_48_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_48_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_48_11);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l6);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_49_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_49_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_49_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_49_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_49_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_49_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_49_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_49_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_49_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_49_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_49_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_49_11);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l6);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_50_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_50_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_50_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_50_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_50_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_50_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_50_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_50_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_50_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_50_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_50_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_50_11);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l6);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_51_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_51_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_51_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_51_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_51_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_51_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_51_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_51_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_51_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_51_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_51_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_51_11);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l6);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_52_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_52_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_52_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_52_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_52_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_52_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_52_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_52_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_52_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_52_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_52_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_52_11);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l6);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_53_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_53_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_53_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_53_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_53_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_53_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_53_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_53_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_53_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_53_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_53_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_53_11);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l6);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_54_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_54_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_54_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_54_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_54_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_54_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_54_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_54_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_54_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_54_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_54_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_54_11);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l6);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_55_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_55_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_55_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_55_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_55_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_55_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_55_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_55_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_55_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_55_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_55_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_55_11);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l7);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_56_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_56_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_56_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_56_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_56_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_56_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_56_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_56_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_56_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_56_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_56_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_56_11);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l7);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_57_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_57_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_57_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_57_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_57_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_57_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_57_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_57_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_57_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_57_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_57_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_57_11);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l7);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_58_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_58_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_58_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_58_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_58_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_58_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_58_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_58_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_58_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_58_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_58_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_58_11);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l7);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_59_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_59_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_59_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_59_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_59_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_59_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_59_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_59_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_59_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_59_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_59_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_59_11);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l7);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_60_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_60_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_60_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_60_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_60_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_60_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_60_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_60_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_60_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_60_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_60_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_60_11);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l7);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_61_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_61_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_61_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_61_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_61_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_61_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_61_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_61_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_61_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_61_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_61_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_61_11);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l7);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_62_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_62_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_62_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_62_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_62_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_62_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_62_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_62_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_62_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_62_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_62_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_62_11);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l7);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_63_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_63_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_63_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_63_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_63_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_63_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_63_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_63_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_63_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_63_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_63_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_63_11);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l8);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_64_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_64_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_64_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_64_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_64_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_64_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_64_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_64_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_64_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_64_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_64_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_64_11);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l8);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_65_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_65_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_65_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_65_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_65_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_65_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_65_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_65_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_65_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_65_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_65_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_65_11);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l8);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_66_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_66_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_66_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_66_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_66_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_66_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_66_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_66_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_66_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_66_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_66_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_66_11);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l8);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_67_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_67_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_67_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_67_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_67_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_67_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_67_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_67_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_67_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_67_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_67_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_67_11);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l8);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_68_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_68_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_68_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_68_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_68_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_68_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_68_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_68_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_68_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_68_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_68_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_68_11);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l8);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_69_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_69_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_69_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_69_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_69_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_69_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_69_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_69_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_69_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_69_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_69_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_69_11);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l8);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_70_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_70_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_70_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_70_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_70_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_70_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_70_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_70_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_70_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_70_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_70_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_70_11);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l8);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_71_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_71_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_71_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_71_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_71_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_71_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_71_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_71_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_71_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_71_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_71_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_71_11);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l9);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_72_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_72_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_72_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_72_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_72_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_72_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_72_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_72_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_72_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_72_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_72_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_72_11);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l9);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_73_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_73_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_73_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_73_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_73_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_73_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_73_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_73_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_73_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_73_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_73_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_73_11);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l9);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_74_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_74_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_74_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_74_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_74_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_74_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_74_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_74_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_74_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_74_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_74_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_74_11);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l9);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_75_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_75_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_75_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_75_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_75_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_75_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_75_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_75_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_75_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_75_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_75_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_75_11);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l9);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_76_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_76_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_76_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_76_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_76_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_76_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_76_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_76_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_76_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_76_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_76_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_76_11);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l9);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_77_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_77_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_77_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_77_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_77_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_77_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_77_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_77_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_77_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_77_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_77_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_77_11);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l9);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_78_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_78_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_78_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_78_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_78_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_78_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_78_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_78_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_78_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_78_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_78_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_78_11);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l9);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_79_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_79_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_79_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_79_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_79_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_79_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_79_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_79_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_79_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_79_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_79_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_79_11);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l10);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_80_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_80_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_80_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_80_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_80_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_80_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_80_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_80_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_80_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_80_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_80_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_80_11);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l10);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_81_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_81_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_81_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_81_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_81_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_81_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_81_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_81_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_81_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_81_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_81_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_81_11);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l10);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_82_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_82_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_82_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_82_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_82_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_82_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_82_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_82_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_82_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_82_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_82_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_82_11);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l10);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_83_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_83_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_83_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_83_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_83_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_83_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_83_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_83_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_83_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_83_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_83_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_83_11);

	opl512 = _mm512_permutexvar_epi64(idx_4,acc512l10);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_84_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_84_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_84_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_84_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_84_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_84_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_84_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_84_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_84_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_84_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_84_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_84_11);

	opl512 = _mm512_permutexvar_epi64(idx_5,acc512l10);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_85_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_85_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_85_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_85_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_85_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_85_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_85_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_85_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_85_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_85_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_85_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_85_11);

	opl512 = _mm512_permutexvar_epi64(idx_6,acc512l10);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_86_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_86_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_86_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_86_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_86_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_86_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_86_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_86_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_86_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_86_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_86_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_86_11);

	opl512 = _mm512_permutexvar_epi64(idx_7,acc512l10);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_87_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_87_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_87_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_87_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_87_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_87_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_87_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_87_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_87_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_87_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_87_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_87_11);

	opl512 = _mm512_permutexvar_epi64(idx_0,acc512l11);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_88_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_88_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_88_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_88_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_88_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_88_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_88_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_88_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_88_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_88_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_88_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_88_11);

	opl512 = _mm512_permutexvar_epi64(idx_1,acc512l11);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_89_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_89_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_89_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_89_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_89_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_89_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_89_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_89_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_89_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_89_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_89_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_89_11);

	opl512 = _mm512_permutexvar_epi64(idx_2,acc512l11);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_90_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_90_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_90_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_90_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_90_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_90_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_90_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_90_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_90_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_90_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_90_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_90_11);

	opl512 = _mm512_permutexvar_epi64(idx_3,acc512l11);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_91_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_91_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_91_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_91_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_91_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_91_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_91_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_91_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_91_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_91_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_91_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_91_11);

	//~ computation of : Q*red_int_coeff mod(E)

	__m512i tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_0);
	__m512i tmpZero512l0 = _mm512_madd52lo_epu64(acc512l0,KZ_0_0,tmpq512);
	__m512i tmpZero512l1 = _mm512_madd52lo_epu64(acc512l1,KZ_0_1,tmpq512);
	__m512i tmpZero512l2 = _mm512_madd52lo_epu64(acc512l2,KZ_0_2,tmpq512);
	__m512i tmpZero512l3 = _mm512_madd52lo_epu64(acc512l3,KZ_0_3,tmpq512);
	__m512i tmpZero512l4 = _mm512_madd52lo_epu64(acc512l4,KZ_0_4,tmpq512);
	__m512i tmpZero512l5 = _mm512_madd52lo_epu64(acc512l5,KZ_0_5,tmpq512);
	__m512i tmpZero512l6 = _mm512_madd52lo_epu64(acc512l6,KZ_0_6,tmpq512);
	__m512i tmpZero512l7 = _mm512_madd52lo_epu64(acc512l7,KZ_0_7,tmpq512);
	__m512i tmpZero512l8 = _mm512_madd52lo_epu64(acc512l8,KZ_0_8,tmpq512);
	__m512i tmpZero512l9 = _mm512_madd52lo_epu64(acc512l9,KZ_0_9,tmpq512);
	__m512i tmpZero512l10 = _mm512_madd52lo_epu64(acc512l10,KZ_0_10,tmpq512);
	__m512i tmpZero512l11 = _mm512_madd52lo_epu64(acc512l11,KZ_0_11,tmpq512);
	__m512i tmpZero512h0 = _mm512_madd52hi_epu64(acc512h0,KZ_0_0,tmpq512);
	__m512i tmpZero512h1 = _mm512_madd52hi_epu64(acc512h1,KZ_0_1,tmpq512);
	__m512i tmpZero512h2 = _mm512_madd52hi_epu64(acc512h2,KZ_0_2,tmpq512);
	__m512i tmpZero512h3 = _mm512_madd52hi_epu64(acc512h3,KZ_0_3,tmpq512);
	__m512i tmpZero512h4 = _mm512_madd52hi_epu64(acc512h4,KZ_0_4,tmpq512);
	__m512i tmpZero512h5 = _mm512_madd52hi_epu64(acc512h5,KZ_0_5,tmpq512);
	__m512i tmpZero512h6 = _mm512_madd52hi_epu64(acc512h6,KZ_0_6,tmpq512);
	__m512i tmpZero512h7 = _mm512_madd52hi_epu64(acc512h7,KZ_0_7,tmpq512);
	__m512i tmpZero512h8 = _mm512_madd52hi_epu64(acc512h8,KZ_0_8,tmpq512);
	__m512i tmpZero512h9 = _mm512_madd52hi_epu64(acc512h9,KZ_0_9,tmpq512);
	__m512i tmpZero512h10 = _mm512_madd52hi_epu64(acc512h10,KZ_0_10,tmpq512);
	__m512i tmpZero512h11 = _mm512_madd52hi_epu64(acc512h11,KZ_0_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_1_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_1_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_1_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_1_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_1_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_1_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_1_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_1_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_1_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_1_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_1_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_1_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_1_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_1_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_1_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_1_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_1_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_1_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_1_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_1_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_1_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_1_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_1_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_1_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_2_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_2_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_2_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_2_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_2_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_2_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_2_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_2_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_2_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_2_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_2_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_2_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_2_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_2_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_2_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_2_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_2_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_2_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_2_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_2_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_2_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_2_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_2_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_2_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_3_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_3_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_3_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_3_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_3_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_3_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_3_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_3_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_3_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_3_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_3_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_3_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_3_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_3_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_3_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_3_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_3_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_3_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_3_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_3_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_3_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_3_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_3_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_3_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_4_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_4_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_4_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_4_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_4_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_4_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_4_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_4_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_4_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_4_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_4_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_4_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_4_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_4_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_4_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_4_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_4_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_4_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_4_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_4_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_4_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_4_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_4_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_4_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_5_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_5_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_5_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_5_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_5_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_5_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_5_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_5_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_5_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_5_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_5_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_5_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_5_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_5_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_5_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_5_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_5_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_5_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_5_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_5_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_5_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_5_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_5_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_5_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_6_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_6_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_6_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_6_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_6_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_6_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_6_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_6_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_6_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_6_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_6_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_6_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_6_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_6_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_6_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_6_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_6_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_6_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_6_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_6_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_6_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_6_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_6_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_6_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_7_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_7_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_7_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_7_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_7_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_7_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_7_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_7_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_7_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_7_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_7_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_7_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_7_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_7_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_7_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_7_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_7_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_7_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_7_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_7_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_7_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_7_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_7_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_7_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_8_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_8_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_8_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_8_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_8_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_8_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_8_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_8_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_8_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_8_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_8_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_8_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_8_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_8_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_8_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_8_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_8_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_8_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_8_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_8_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_8_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_8_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_8_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_8_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_9_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_9_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_9_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_9_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_9_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_9_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_9_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_9_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_9_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_9_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_9_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_9_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_9_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_9_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_9_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_9_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_9_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_9_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_9_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_9_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_9_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_9_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_9_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_9_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_10_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_10_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_10_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_10_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_10_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_10_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_10_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_10_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_10_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_10_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_10_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_10_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_10_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_10_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_10_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_10_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_10_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_10_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_10_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_10_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_10_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_10_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_10_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_10_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_11_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_11_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_11_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_11_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_11_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_11_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_11_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_11_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_11_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_11_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_11_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_11_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_11_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_11_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_11_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_11_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_11_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_11_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_11_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_11_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_11_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_11_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_11_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_11_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_12_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_12_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_12_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_12_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_12_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_12_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_12_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_12_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_12_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_12_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_12_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_12_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_12_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_12_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_12_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_12_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_12_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_12_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_12_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_12_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_12_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_12_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_12_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_12_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_13_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_13_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_13_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_13_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_13_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_13_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_13_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_13_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_13_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_13_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_13_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_13_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_13_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_13_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_13_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_13_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_13_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_13_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_13_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_13_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_13_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_13_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_13_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_13_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_14_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_14_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_14_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_14_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_14_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_14_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_14_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_14_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_14_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_14_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_14_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_14_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_14_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_14_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_14_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_14_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_14_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_14_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_14_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_14_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_14_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_14_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_14_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_14_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_15_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_15_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_15_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_15_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_15_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_15_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_15_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_15_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_15_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_15_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_15_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_15_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_15_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_15_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_15_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_15_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_15_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_15_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_15_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_15_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_15_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_15_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_15_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_15_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_16_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_16_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_16_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_16_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_16_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_16_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_16_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_16_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_16_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_16_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_16_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_16_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_16_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_16_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_16_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_16_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_16_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_16_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_16_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_16_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_16_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_16_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_16_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_16_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_17_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_17_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_17_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_17_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_17_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_17_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_17_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_17_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_17_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_17_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_17_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_17_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_17_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_17_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_17_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_17_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_17_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_17_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_17_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_17_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_17_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_17_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_17_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_17_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_18_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_18_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_18_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_18_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_18_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_18_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_18_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_18_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_18_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_18_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_18_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_18_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_18_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_18_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_18_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_18_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_18_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_18_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_18_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_18_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_18_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_18_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_18_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_18_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_19_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_19_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_19_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_19_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_19_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_19_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_19_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_19_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_19_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_19_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_19_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_19_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_19_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_19_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_19_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_19_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_19_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_19_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_19_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_19_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_19_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_19_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_19_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_19_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_20_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_20_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_20_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_20_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_20_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_20_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_20_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_20_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_20_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_20_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_20_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_20_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_20_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_20_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_20_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_20_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_20_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_20_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_20_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_20_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_20_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_20_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_20_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_20_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_21_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_21_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_21_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_21_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_21_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_21_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_21_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_21_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_21_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_21_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_21_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_21_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_21_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_21_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_21_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_21_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_21_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_21_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_21_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_21_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_21_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_21_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_21_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_21_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_22_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_22_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_22_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_22_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_22_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_22_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_22_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_22_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_22_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_22_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_22_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_22_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_22_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_22_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_22_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_22_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_22_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_22_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_22_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_22_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_22_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_22_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_22_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_22_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_23_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_23_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_23_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_23_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_23_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_23_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_23_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_23_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_23_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_23_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_23_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_23_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_23_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_23_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_23_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_23_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_23_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_23_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_23_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_23_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_23_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_23_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_23_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_23_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_24_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_24_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_24_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_24_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_24_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_24_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_24_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_24_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_24_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_24_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_24_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_24_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_24_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_24_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_24_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_24_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_24_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_24_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_24_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_24_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_24_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_24_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_24_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_24_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_25_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_25_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_25_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_25_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_25_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_25_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_25_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_25_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_25_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_25_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_25_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_25_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_25_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_25_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_25_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_25_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_25_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_25_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_25_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_25_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_25_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_25_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_25_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_25_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_26_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_26_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_26_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_26_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_26_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_26_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_26_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_26_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_26_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_26_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_26_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_26_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_26_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_26_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_26_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_26_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_26_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_26_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_26_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_26_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_26_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_26_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_26_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_26_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_27_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_27_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_27_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_27_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_27_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_27_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_27_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_27_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_27_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_27_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_27_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_27_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_27_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_27_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_27_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_27_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_27_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_27_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_27_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_27_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_27_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_27_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_27_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_27_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_28_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_28_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_28_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_28_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_28_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_28_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_28_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_28_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_28_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_28_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_28_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_28_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_28_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_28_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_28_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_28_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_28_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_28_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_28_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_28_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_28_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_28_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_28_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_28_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_29_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_29_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_29_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_29_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_29_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_29_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_29_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_29_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_29_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_29_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_29_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_29_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_29_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_29_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_29_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_29_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_29_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_29_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_29_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_29_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_29_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_29_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_29_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_29_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_30_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_30_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_30_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_30_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_30_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_30_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_30_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_30_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_30_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_30_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_30_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_30_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_30_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_30_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_30_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_30_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_30_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_30_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_30_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_30_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_30_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_30_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_30_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_30_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_31_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_31_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_31_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_31_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_31_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_31_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_31_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_31_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_31_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_31_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_31_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_31_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_31_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_31_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_31_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_31_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_31_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_31_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_31_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_31_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_31_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_31_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_31_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_31_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_32_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_32_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_32_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_32_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_32_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_32_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_32_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_32_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_32_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_32_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_32_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_32_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_32_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_32_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_32_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_32_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_32_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_32_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_32_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_32_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_32_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_32_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_32_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_32_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_33_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_33_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_33_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_33_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_33_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_33_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_33_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_33_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_33_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_33_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_33_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_33_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_33_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_33_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_33_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_33_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_33_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_33_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_33_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_33_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_33_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_33_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_33_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_33_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_34_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_34_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_34_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_34_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_34_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_34_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_34_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_34_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_34_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_34_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_34_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_34_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_34_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_34_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_34_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_34_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_34_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_34_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_34_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_34_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_34_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_34_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_34_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_34_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_35_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_35_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_35_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_35_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_35_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_35_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_35_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_35_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_35_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_35_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_35_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_35_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_35_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_35_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_35_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_35_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_35_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_35_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_35_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_35_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_35_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_35_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_35_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_35_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_36_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_36_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_36_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_36_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_36_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_36_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_36_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_36_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_36_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_36_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_36_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_36_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_36_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_36_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_36_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_36_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_36_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_36_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_36_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_36_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_36_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_36_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_36_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_36_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_37_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_37_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_37_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_37_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_37_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_37_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_37_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_37_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_37_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_37_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_37_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_37_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_37_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_37_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_37_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_37_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_37_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_37_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_37_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_37_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_37_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_37_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_37_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_37_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_38_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_38_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_38_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_38_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_38_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_38_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_38_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_38_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_38_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_38_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_38_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_38_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_38_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_38_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_38_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_38_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_38_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_38_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_38_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_38_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_38_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_38_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_38_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_38_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_39_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_39_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_39_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_39_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_39_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_39_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_39_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_39_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_39_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_39_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_39_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_39_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_39_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_39_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_39_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_39_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_39_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_39_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_39_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_39_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_39_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_39_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_39_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_39_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_40_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_40_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_40_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_40_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_40_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_40_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_40_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_40_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_40_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_40_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_40_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_40_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_40_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_40_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_40_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_40_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_40_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_40_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_40_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_40_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_40_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_40_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_40_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_40_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_41_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_41_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_41_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_41_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_41_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_41_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_41_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_41_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_41_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_41_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_41_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_41_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_41_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_41_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_41_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_41_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_41_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_41_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_41_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_41_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_41_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_41_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_41_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_41_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_42_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_42_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_42_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_42_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_42_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_42_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_42_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_42_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_42_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_42_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_42_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_42_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_42_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_42_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_42_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_42_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_42_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_42_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_42_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_42_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_42_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_42_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_42_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_42_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_43_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_43_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_43_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_43_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_43_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_43_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_43_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_43_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_43_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_43_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_43_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_43_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_43_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_43_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_43_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_43_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_43_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_43_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_43_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_43_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_43_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_43_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_43_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_43_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_44_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_44_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_44_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_44_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_44_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_44_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_44_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_44_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_44_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_44_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_44_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_44_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_44_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_44_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_44_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_44_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_44_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_44_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_44_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_44_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_44_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_44_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_44_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_44_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_45_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_45_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_45_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_45_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_45_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_45_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_45_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_45_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_45_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_45_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_45_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_45_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_45_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_45_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_45_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_45_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_45_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_45_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_45_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_45_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_45_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_45_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_45_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_45_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_46_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_46_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_46_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_46_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_46_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_46_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_46_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_46_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_46_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_46_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_46_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_46_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_46_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_46_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_46_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_46_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_46_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_46_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_46_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_46_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_46_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_46_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_46_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_46_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_47_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_47_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_47_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_47_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_47_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_47_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_47_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_47_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_47_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_47_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_47_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_47_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_47_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_47_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_47_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_47_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_47_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_47_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_47_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_47_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_47_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_47_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_47_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_47_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_48_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_48_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_48_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_48_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_48_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_48_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_48_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_48_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_48_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_48_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_48_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_48_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_48_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_48_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_48_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_48_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_48_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_48_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_48_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_48_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_48_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_48_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_48_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_48_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_49_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_49_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_49_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_49_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_49_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_49_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_49_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_49_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_49_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_49_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_49_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_49_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_49_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_49_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_49_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_49_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_49_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_49_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_49_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_49_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_49_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_49_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_49_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_49_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_50_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_50_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_50_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_50_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_50_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_50_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_50_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_50_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_50_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_50_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_50_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_50_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_50_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_50_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_50_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_50_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_50_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_50_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_50_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_50_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_50_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_50_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_50_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_50_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_51_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_51_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_51_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_51_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_51_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_51_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_51_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_51_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_51_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_51_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_51_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_51_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_51_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_51_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_51_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_51_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_51_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_51_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_51_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_51_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_51_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_51_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_51_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_51_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_52_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_52_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_52_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_52_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_52_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_52_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_52_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_52_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_52_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_52_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_52_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_52_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_52_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_52_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_52_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_52_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_52_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_52_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_52_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_52_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_52_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_52_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_52_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_52_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_53_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_53_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_53_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_53_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_53_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_53_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_53_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_53_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_53_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_53_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_53_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_53_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_53_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_53_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_53_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_53_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_53_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_53_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_53_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_53_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_53_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_53_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_53_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_53_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_54_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_54_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_54_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_54_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_54_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_54_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_54_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_54_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_54_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_54_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_54_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_54_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_54_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_54_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_54_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_54_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_54_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_54_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_54_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_54_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_54_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_54_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_54_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_54_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_55_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_55_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_55_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_55_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_55_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_55_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_55_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_55_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_55_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_55_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_55_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_55_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_55_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_55_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_55_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_55_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_55_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_55_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_55_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_55_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_55_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_55_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_55_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_55_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_7);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_56_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_56_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_56_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_56_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_56_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_56_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_56_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_56_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_56_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_56_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_56_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_56_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_56_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_56_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_56_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_56_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_56_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_56_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_56_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_56_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_56_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_56_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_56_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_56_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_7);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_57_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_57_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_57_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_57_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_57_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_57_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_57_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_57_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_57_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_57_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_57_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_57_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_57_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_57_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_57_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_57_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_57_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_57_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_57_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_57_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_57_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_57_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_57_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_57_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_7);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_58_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_58_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_58_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_58_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_58_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_58_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_58_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_58_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_58_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_58_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_58_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_58_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_58_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_58_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_58_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_58_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_58_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_58_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_58_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_58_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_58_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_58_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_58_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_58_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_7);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_59_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_59_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_59_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_59_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_59_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_59_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_59_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_59_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_59_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_59_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_59_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_59_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_59_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_59_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_59_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_59_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_59_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_59_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_59_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_59_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_59_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_59_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_59_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_59_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_7);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_60_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_60_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_60_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_60_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_60_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_60_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_60_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_60_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_60_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_60_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_60_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_60_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_60_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_60_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_60_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_60_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_60_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_60_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_60_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_60_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_60_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_60_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_60_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_60_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_7);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_61_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_61_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_61_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_61_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_61_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_61_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_61_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_61_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_61_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_61_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_61_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_61_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_61_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_61_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_61_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_61_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_61_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_61_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_61_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_61_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_61_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_61_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_61_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_61_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_7);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_62_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_62_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_62_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_62_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_62_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_62_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_62_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_62_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_62_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_62_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_62_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_62_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_62_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_62_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_62_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_62_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_62_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_62_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_62_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_62_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_62_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_62_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_62_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_62_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_7);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_63_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_63_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_63_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_63_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_63_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_63_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_63_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_63_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_63_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_63_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_63_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_63_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_63_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_63_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_63_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_63_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_63_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_63_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_63_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_63_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_63_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_63_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_63_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_63_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_8);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_64_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_64_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_64_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_64_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_64_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_64_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_64_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_64_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_64_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_64_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_64_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_64_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_64_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_64_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_64_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_64_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_64_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_64_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_64_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_64_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_64_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_64_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_64_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_64_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_8);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_65_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_65_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_65_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_65_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_65_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_65_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_65_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_65_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_65_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_65_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_65_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_65_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_65_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_65_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_65_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_65_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_65_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_65_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_65_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_65_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_65_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_65_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_65_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_65_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_8);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_66_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_66_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_66_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_66_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_66_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_66_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_66_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_66_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_66_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_66_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_66_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_66_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_66_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_66_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_66_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_66_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_66_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_66_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_66_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_66_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_66_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_66_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_66_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_66_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_8);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_67_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_67_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_67_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_67_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_67_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_67_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_67_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_67_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_67_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_67_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_67_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_67_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_67_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_67_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_67_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_67_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_67_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_67_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_67_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_67_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_67_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_67_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_67_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_67_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_8);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_68_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_68_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_68_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_68_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_68_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_68_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_68_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_68_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_68_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_68_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_68_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_68_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_68_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_68_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_68_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_68_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_68_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_68_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_68_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_68_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_68_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_68_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_68_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_68_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_8);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_69_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_69_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_69_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_69_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_69_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_69_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_69_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_69_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_69_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_69_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_69_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_69_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_69_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_69_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_69_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_69_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_69_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_69_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_69_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_69_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_69_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_69_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_69_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_69_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_8);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_70_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_70_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_70_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_70_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_70_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_70_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_70_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_70_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_70_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_70_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_70_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_70_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_70_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_70_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_70_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_70_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_70_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_70_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_70_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_70_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_70_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_70_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_70_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_70_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_8);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_71_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_71_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_71_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_71_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_71_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_71_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_71_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_71_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_71_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_71_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_71_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_71_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_71_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_71_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_71_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_71_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_71_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_71_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_71_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_71_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_71_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_71_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_71_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_71_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_9);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_72_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_72_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_72_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_72_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_72_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_72_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_72_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_72_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_72_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_72_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_72_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_72_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_72_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_72_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_72_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_72_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_72_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_72_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_72_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_72_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_72_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_72_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_72_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_72_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_9);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_73_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_73_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_73_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_73_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_73_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_73_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_73_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_73_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_73_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_73_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_73_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_73_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_73_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_73_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_73_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_73_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_73_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_73_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_73_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_73_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_73_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_73_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_73_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_73_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_9);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_74_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_74_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_74_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_74_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_74_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_74_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_74_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_74_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_74_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_74_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_74_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_74_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_74_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_74_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_74_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_74_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_74_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_74_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_74_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_74_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_74_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_74_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_74_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_74_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_9);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_75_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_75_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_75_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_75_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_75_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_75_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_75_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_75_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_75_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_75_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_75_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_75_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_75_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_75_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_75_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_75_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_75_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_75_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_75_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_75_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_75_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_75_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_75_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_75_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_9);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_76_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_76_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_76_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_76_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_76_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_76_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_76_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_76_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_76_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_76_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_76_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_76_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_76_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_76_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_76_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_76_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_76_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_76_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_76_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_76_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_76_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_76_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_76_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_76_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_9);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_77_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_77_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_77_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_77_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_77_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_77_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_77_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_77_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_77_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_77_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_77_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_77_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_77_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_77_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_77_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_77_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_77_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_77_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_77_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_77_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_77_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_77_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_77_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_77_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_9);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_78_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_78_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_78_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_78_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_78_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_78_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_78_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_78_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_78_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_78_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_78_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_78_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_78_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_78_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_78_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_78_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_78_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_78_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_78_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_78_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_78_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_78_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_78_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_78_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_9);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_79_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_79_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_79_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_79_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_79_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_79_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_79_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_79_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_79_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_79_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_79_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_79_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_79_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_79_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_79_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_79_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_79_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_79_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_79_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_79_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_79_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_79_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_79_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_79_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_10);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_80_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_80_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_80_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_80_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_80_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_80_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_80_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_80_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_80_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_80_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_80_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_80_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_80_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_80_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_80_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_80_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_80_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_80_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_80_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_80_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_80_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_80_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_80_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_80_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_10);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_81_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_81_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_81_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_81_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_81_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_81_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_81_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_81_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_81_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_81_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_81_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_81_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_81_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_81_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_81_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_81_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_81_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_81_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_81_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_81_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_81_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_81_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_81_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_81_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_10);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_82_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_82_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_82_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_82_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_82_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_82_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_82_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_82_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_82_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_82_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_82_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_82_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_82_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_82_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_82_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_82_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_82_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_82_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_82_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_82_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_82_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_82_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_82_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_82_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_10);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_83_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_83_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_83_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_83_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_83_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_83_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_83_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_83_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_83_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_83_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_83_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_83_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_83_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_83_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_83_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_83_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_83_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_83_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_83_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_83_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_83_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_83_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_83_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_83_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_10);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_84_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_84_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_84_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_84_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_84_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_84_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_84_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_84_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_84_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_84_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_84_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_84_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_84_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_84_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_84_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_84_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_84_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_84_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_84_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_84_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_84_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_84_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_84_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_84_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_10);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_85_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_85_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_85_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_85_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_85_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_85_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_85_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_85_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_85_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_85_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_85_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_85_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_85_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_85_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_85_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_85_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_85_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_85_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_85_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_85_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_85_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_85_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_85_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_85_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_10);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_86_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_86_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_86_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_86_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_86_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_86_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_86_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_86_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_86_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_86_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_86_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_86_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_86_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_86_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_86_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_86_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_86_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_86_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_86_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_86_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_86_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_86_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_86_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_86_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_10);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_87_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_87_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_87_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_87_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_87_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_87_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_87_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_87_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_87_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_87_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_87_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_87_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_87_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_87_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_87_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_87_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_87_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_87_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_87_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_87_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_87_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_87_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_87_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_87_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_11);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_88_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_88_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_88_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_88_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_88_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_88_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_88_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_88_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_88_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_88_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_88_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_88_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_88_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_88_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_88_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_88_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_88_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_88_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_88_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_88_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_88_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_88_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_88_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_88_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_11);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_89_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_89_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_89_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_89_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_89_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_89_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_89_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_89_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_89_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_89_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_89_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_89_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_89_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_89_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_89_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_89_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_89_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_89_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_89_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_89_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_89_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_89_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_89_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_89_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_11);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_90_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_90_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_90_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_90_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_90_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_90_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_90_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_90_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_90_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_90_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_90_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_90_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_90_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_90_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_90_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_90_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_90_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_90_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_90_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_90_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_90_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_90_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_90_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_90_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_11);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_91_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_91_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_91_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_91_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_91_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_91_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_91_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_91_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_91_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_91_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_91_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_91_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_91_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_91_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_91_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_91_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_91_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_91_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_91_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_91_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_91_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_91_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_91_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_91_11,tmpq512);

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
	carry = _mm512_srli_epi64(tmpZero512l7,52);
	tmpZero512h7 = _mm512_add_epi64(carry,tmpZero512h7);
	carry = _mm512_srli_epi64(tmpZero512l8,52);
	tmpZero512h8 = _mm512_add_epi64(carry,tmpZero512h8);
	carry = _mm512_srli_epi64(tmpZero512l9,52);
	tmpZero512h9 = _mm512_add_epi64(carry,tmpZero512h9);
	carry = _mm512_srli_epi64(tmpZero512l10,52);
	tmpZero512h10 = _mm512_add_epi64(carry,tmpZero512h10);
	carry = _mm512_srli_epi64(tmpZero512l11,52);
	tmpZero512h11 = _mm512_add_epi64(carry,tmpZero512h11);

	_mm512_store_epi64(rop,tmpZero512h0);
	_mm512_store_epi64(rop+8,tmpZero512h1);
	_mm512_store_epi64(rop+16,tmpZero512h2);
	_mm512_store_epi64(rop+24,tmpZero512h3);
	_mm512_store_epi64(rop+32,tmpZero512h4);
	_mm512_store_epi64(rop+40,tmpZero512h5);
	_mm512_store_epi64(rop+48,tmpZero512h6);
	_mm512_store_epi64(rop+56,tmpZero512h7);
	_mm512_store_epi64(rop+64,tmpZero512h8);
	_mm512_store_epi64(rop+72,tmpZero512h9);
	_mm512_store_epi64(rop+80,tmpZero512h10);
	_mm512_store_epi64(rop+88,tmpZero512h11);


}

#define idx_opl (__m512i){0UL,2UL,4UL,6UL,0x8UL,0xAUL,0xCUL,0xEUL}
#define idx_oph (__m512i){0x1UL,0x3UL,0x5UL,0x7UL,0x9UL,0xBUL,0xDUL,0xFUL}

inline void internal_reduction_512(int64_t *rop, int128 *op){

	__m512i carry;

	__m512i acc512l0 = zero512, acc512l1 = zero512, acc512l2 = zero512, acc512l3 = zero512, acc512l4 = zero512, acc512l5 = zero512, acc512l6 = zero512, acc512l7 = zero512, acc512l8 = zero512, acc512l9 = zero512, acc512l10 = zero512, acc512l11 = zero512 ;

	__m512i acc512h0 = zero512, acc512h1 = zero512, acc512h2 = zero512, acc512h3 = zero512, acc512h4 = zero512, acc512h5 = zero512, acc512h6 = zero512, acc512h7 = zero512, acc512h8 = zero512, acc512h9 = zero512, acc512h10 = zero512, acc512h11 = zero512 ;


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
	__m512i q512_7 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_7);
	__m512i q512_8 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_8);
	__m512i q512_9 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_9);
	__m512i q512_10 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_10);
	__m512i q512_11 = _mm512_madd52lo_epu64(zero512,opl512,KQ_0_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[1]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_1_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_1_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_1_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_1_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_1_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_1_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_1_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_1_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_1_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_1_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_1_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_1_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[2]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_2_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_2_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_2_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_2_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_2_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_2_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_2_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_2_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_2_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_2_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_2_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_2_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[3]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_3_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_3_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_3_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_3_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_3_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_3_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_3_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_3_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_3_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_3_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_3_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_3_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[4]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_4_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_4_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_4_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_4_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_4_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_4_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_4_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_4_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_4_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_4_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_4_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_4_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[5]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_5_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_5_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_5_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_5_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_5_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_5_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_5_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_5_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_5_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_5_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_5_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_5_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[6]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_6_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_6_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_6_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_6_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_6_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_6_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_6_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_6_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_6_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_6_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_6_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_6_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[7]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_7_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_7_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_7_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_7_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_7_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_7_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_7_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_7_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_7_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_7_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_7_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_7_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[8]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_8_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_8_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_8_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_8_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_8_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_8_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_8_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_8_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_8_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_8_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_8_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_8_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[9]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_9_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_9_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_9_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_9_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_9_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_9_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_9_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_9_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_9_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_9_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_9_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_9_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[10]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_10_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_10_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_10_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_10_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_10_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_10_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_10_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_10_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_10_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_10_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_10_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_10_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[11]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_11_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_11_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_11_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_11_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_11_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_11_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_11_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_11_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_11_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_11_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_11_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_11_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[12]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_12_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_12_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_12_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_12_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_12_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_12_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_12_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_12_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_12_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_12_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_12_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_12_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[13]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_13_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_13_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_13_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_13_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_13_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_13_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_13_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_13_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_13_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_13_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_13_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_13_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[14]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_14_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_14_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_14_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_14_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_14_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_14_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_14_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_14_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_14_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_14_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_14_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_14_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[15]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_15_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_15_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_15_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_15_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_15_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_15_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_15_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_15_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_15_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_15_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_15_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_15_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[16]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_16_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_16_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_16_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_16_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_16_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_16_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_16_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_16_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_16_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_16_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_16_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_16_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[17]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_17_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_17_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_17_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_17_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_17_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_17_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_17_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_17_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_17_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_17_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_17_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_17_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[18]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_18_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_18_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_18_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_18_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_18_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_18_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_18_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_18_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_18_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_18_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_18_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_18_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[19]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_19_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_19_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_19_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_19_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_19_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_19_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_19_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_19_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_19_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_19_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_19_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_19_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[20]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_20_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_20_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_20_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_20_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_20_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_20_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_20_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_20_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_20_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_20_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_20_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_20_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[21]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_21_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_21_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_21_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_21_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_21_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_21_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_21_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_21_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_21_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_21_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_21_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_21_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[22]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_22_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_22_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_22_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_22_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_22_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_22_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_22_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_22_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_22_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_22_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_22_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_22_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[23]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_23_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_23_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_23_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_23_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_23_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_23_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_23_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_23_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_23_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_23_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_23_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_23_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[24]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_24_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_24_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_24_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_24_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_24_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_24_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_24_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_24_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_24_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_24_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_24_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_24_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[25]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_25_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_25_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_25_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_25_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_25_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_25_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_25_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_25_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_25_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_25_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_25_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_25_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[26]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_26_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_26_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_26_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_26_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_26_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_26_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_26_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_26_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_26_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_26_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_26_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_26_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[27]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_27_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_27_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_27_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_27_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_27_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_27_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_27_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_27_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_27_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_27_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_27_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_27_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[28]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_28_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_28_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_28_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_28_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_28_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_28_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_28_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_28_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_28_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_28_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_28_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_28_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[29]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_29_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_29_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_29_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_29_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_29_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_29_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_29_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_29_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_29_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_29_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_29_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_29_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[30]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_30_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_30_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_30_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_30_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_30_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_30_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_30_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_30_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_30_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_30_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_30_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_30_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[31]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_31_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_31_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_31_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_31_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_31_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_31_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_31_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_31_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_31_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_31_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_31_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_31_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[32]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_32_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_32_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_32_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_32_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_32_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_32_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_32_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_32_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_32_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_32_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_32_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_32_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[33]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_33_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_33_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_33_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_33_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_33_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_33_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_33_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_33_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_33_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_33_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_33_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_33_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[34]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_34_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_34_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_34_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_34_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_34_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_34_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_34_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_34_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_34_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_34_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_34_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_34_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[35]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_35_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_35_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_35_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_35_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_35_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_35_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_35_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_35_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_35_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_35_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_35_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_35_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[36]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_36_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_36_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_36_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_36_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_36_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_36_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_36_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_36_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_36_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_36_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_36_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_36_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[37]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_37_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_37_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_37_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_37_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_37_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_37_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_37_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_37_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_37_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_37_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_37_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_37_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[38]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_38_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_38_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_38_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_38_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_38_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_38_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_38_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_38_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_38_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_38_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_38_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_38_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[39]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_39_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_39_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_39_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_39_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_39_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_39_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_39_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_39_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_39_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_39_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_39_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_39_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[40]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_40_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_40_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_40_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_40_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_40_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_40_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_40_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_40_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_40_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_40_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_40_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_40_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[41]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_41_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_41_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_41_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_41_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_41_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_41_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_41_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_41_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_41_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_41_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_41_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_41_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[42]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_42_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_42_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_42_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_42_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_42_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_42_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_42_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_42_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_42_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_42_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_42_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_42_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[43]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_43_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_43_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_43_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_43_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_43_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_43_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_43_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_43_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_43_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_43_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_43_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_43_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[44]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_44_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_44_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_44_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_44_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_44_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_44_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_44_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_44_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_44_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_44_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_44_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_44_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[45]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_45_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_45_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_45_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_45_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_45_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_45_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_45_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_45_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_45_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_45_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_45_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_45_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[46]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_46_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_46_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_46_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_46_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_46_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_46_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_46_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_46_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_46_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_46_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_46_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_46_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[47]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_47_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_47_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_47_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_47_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_47_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_47_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_47_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_47_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_47_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_47_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_47_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_47_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[48]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_48_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_48_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_48_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_48_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_48_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_48_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_48_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_48_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_48_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_48_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_48_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_48_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[49]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_49_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_49_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_49_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_49_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_49_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_49_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_49_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_49_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_49_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_49_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_49_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_49_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[50]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_50_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_50_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_50_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_50_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_50_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_50_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_50_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_50_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_50_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_50_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_50_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_50_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[51]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_51_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_51_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_51_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_51_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_51_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_51_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_51_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_51_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_51_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_51_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_51_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_51_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[52]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_52_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_52_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_52_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_52_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_52_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_52_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_52_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_52_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_52_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_52_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_52_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_52_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[53]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_53_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_53_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_53_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_53_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_53_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_53_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_53_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_53_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_53_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_53_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_53_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_53_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[54]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_54_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_54_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_54_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_54_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_54_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_54_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_54_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_54_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_54_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_54_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_54_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_54_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[55]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_55_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_55_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_55_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_55_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_55_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_55_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_55_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_55_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_55_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_55_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_55_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_55_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[56]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_56_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_56_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_56_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_56_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_56_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_56_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_56_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_56_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_56_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_56_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_56_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_56_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[57]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_57_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_57_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_57_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_57_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_57_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_57_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_57_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_57_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_57_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_57_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_57_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_57_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[58]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_58_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_58_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_58_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_58_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_58_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_58_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_58_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_58_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_58_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_58_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_58_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_58_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[59]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_59_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_59_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_59_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_59_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_59_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_59_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_59_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_59_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_59_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_59_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_59_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_59_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[60]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_60_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_60_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_60_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_60_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_60_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_60_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_60_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_60_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_60_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_60_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_60_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_60_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[61]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_61_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_61_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_61_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_61_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_61_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_61_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_61_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_61_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_61_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_61_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_61_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_61_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[62]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_62_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_62_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_62_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_62_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_62_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_62_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_62_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_62_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_62_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_62_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_62_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_62_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[63]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_63_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_63_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_63_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_63_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_63_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_63_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_63_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_63_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_63_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_63_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_63_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_63_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[64]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_64_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_64_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_64_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_64_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_64_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_64_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_64_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_64_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_64_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_64_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_64_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_64_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[65]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_65_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_65_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_65_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_65_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_65_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_65_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_65_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_65_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_65_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_65_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_65_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_65_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[66]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_66_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_66_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_66_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_66_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_66_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_66_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_66_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_66_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_66_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_66_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_66_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_66_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[67]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_67_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_67_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_67_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_67_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_67_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_67_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_67_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_67_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_67_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_67_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_67_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_67_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[68]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_68_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_68_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_68_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_68_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_68_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_68_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_68_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_68_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_68_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_68_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_68_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_68_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[69]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_69_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_69_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_69_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_69_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_69_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_69_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_69_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_69_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_69_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_69_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_69_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_69_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[70]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_70_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_70_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_70_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_70_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_70_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_70_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_70_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_70_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_70_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_70_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_70_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_70_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[71]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_71_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_71_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_71_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_71_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_71_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_71_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_71_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_71_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_71_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_71_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_71_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_71_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[72]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_72_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_72_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_72_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_72_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_72_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_72_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_72_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_72_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_72_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_72_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_72_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_72_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[73]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_73_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_73_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_73_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_73_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_73_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_73_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_73_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_73_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_73_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_73_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_73_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_73_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[74]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_74_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_74_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_74_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_74_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_74_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_74_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_74_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_74_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_74_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_74_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_74_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_74_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[75]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_75_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_75_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_75_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_75_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_75_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_75_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_75_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_75_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_75_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_75_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_75_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_75_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[76]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_76_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_76_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_76_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_76_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_76_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_76_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_76_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_76_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_76_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_76_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_76_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_76_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[77]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_77_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_77_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_77_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_77_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_77_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_77_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_77_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_77_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_77_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_77_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_77_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_77_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[78]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_78_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_78_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_78_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_78_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_78_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_78_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_78_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_78_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_78_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_78_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_78_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_78_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[79]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_79_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_79_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_79_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_79_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_79_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_79_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_79_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_79_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_79_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_79_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_79_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_79_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[80]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_80_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_80_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_80_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_80_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_80_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_80_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_80_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_80_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_80_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_80_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_80_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_80_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[81]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_81_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_81_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_81_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_81_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_81_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_81_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_81_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_81_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_81_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_81_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_81_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_81_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[82]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_82_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_82_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_82_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_82_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_82_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_82_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_82_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_82_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_82_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_82_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_82_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_82_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[83]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_83_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_83_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_83_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_83_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_83_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_83_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_83_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_83_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_83_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_83_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_83_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_83_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[84]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_84_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_84_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_84_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_84_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_84_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_84_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_84_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_84_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_84_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_84_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_84_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_84_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[85]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_85_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_85_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_85_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_85_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_85_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_85_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_85_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_85_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_85_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_85_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_85_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_85_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[86]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_86_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_86_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_86_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_86_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_86_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_86_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_86_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_86_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_86_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_86_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_86_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_86_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[87]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_87_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_87_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_87_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_87_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_87_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_87_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_87_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_87_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_87_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_87_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_87_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_87_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[88]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_88_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_88_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_88_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_88_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_88_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_88_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_88_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_88_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_88_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_88_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_88_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_88_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[89]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_89_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_89_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_89_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_89_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_89_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_89_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_89_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_89_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_89_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_89_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_89_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_89_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[90]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_90_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_90_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_90_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_90_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_90_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_90_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_90_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_90_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_90_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_90_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_90_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_90_11);

	opl512 = _mm512_set1_epi64((uint64_t)op[91]);
	q512_0 = _mm512_madd52lo_epu64(q512_0,opl512,KQ_91_0);
	q512_1 = _mm512_madd52lo_epu64(q512_1,opl512,KQ_91_1);
	q512_2 = _mm512_madd52lo_epu64(q512_2,opl512,KQ_91_2);
	q512_3 = _mm512_madd52lo_epu64(q512_3,opl512,KQ_91_3);
	q512_4 = _mm512_madd52lo_epu64(q512_4,opl512,KQ_91_4);
	q512_5 = _mm512_madd52lo_epu64(q512_5,opl512,KQ_91_5);
	q512_6 = _mm512_madd52lo_epu64(q512_6,opl512,KQ_91_6);
	q512_7 = _mm512_madd52lo_epu64(q512_7,opl512,KQ_91_7);
	q512_8 = _mm512_madd52lo_epu64(q512_8,opl512,KQ_91_8);
	q512_9 = _mm512_madd52lo_epu64(q512_9,opl512,KQ_91_9);
	q512_10 = _mm512_madd52lo_epu64(q512_10,opl512,KQ_91_10);
	q512_11 = _mm512_madd52lo_epu64(q512_11,opl512,KQ_91_11);

	//~ computation of : Q*red_int_coeff mod(E)

	__m512i tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_0);
	__m512i tmpZero512l0 = _mm512_madd52lo_epu64(acc512l0,KZ_0_0,tmpq512);
	__m512i tmpZero512l1 = _mm512_madd52lo_epu64(acc512l1,KZ_0_1,tmpq512);
	__m512i tmpZero512l2 = _mm512_madd52lo_epu64(acc512l2,KZ_0_2,tmpq512);
	__m512i tmpZero512l3 = _mm512_madd52lo_epu64(acc512l3,KZ_0_3,tmpq512);
	__m512i tmpZero512l4 = _mm512_madd52lo_epu64(acc512l4,KZ_0_4,tmpq512);
	__m512i tmpZero512l5 = _mm512_madd52lo_epu64(acc512l5,KZ_0_5,tmpq512);
	__m512i tmpZero512l6 = _mm512_madd52lo_epu64(acc512l6,KZ_0_6,tmpq512);
	__m512i tmpZero512l7 = _mm512_madd52lo_epu64(acc512l7,KZ_0_7,tmpq512);
	__m512i tmpZero512l8 = _mm512_madd52lo_epu64(acc512l8,KZ_0_8,tmpq512);
	__m512i tmpZero512l9 = _mm512_madd52lo_epu64(acc512l9,KZ_0_9,tmpq512);
	__m512i tmpZero512l10 = _mm512_madd52lo_epu64(acc512l10,KZ_0_10,tmpq512);
	__m512i tmpZero512l11 = _mm512_madd52lo_epu64(acc512l11,KZ_0_11,tmpq512);
	__m512i tmpZero512h0 = _mm512_madd52hi_epu64(acc512h0,KZ_0_0,tmpq512);
	__m512i tmpZero512h1 = _mm512_madd52hi_epu64(acc512h1,KZ_0_1,tmpq512);
	__m512i tmpZero512h2 = _mm512_madd52hi_epu64(acc512h2,KZ_0_2,tmpq512);
	__m512i tmpZero512h3 = _mm512_madd52hi_epu64(acc512h3,KZ_0_3,tmpq512);
	__m512i tmpZero512h4 = _mm512_madd52hi_epu64(acc512h4,KZ_0_4,tmpq512);
	__m512i tmpZero512h5 = _mm512_madd52hi_epu64(acc512h5,KZ_0_5,tmpq512);
	__m512i tmpZero512h6 = _mm512_madd52hi_epu64(acc512h6,KZ_0_6,tmpq512);
	__m512i tmpZero512h7 = _mm512_madd52hi_epu64(acc512h7,KZ_0_7,tmpq512);
	__m512i tmpZero512h8 = _mm512_madd52hi_epu64(acc512h8,KZ_0_8,tmpq512);
	__m512i tmpZero512h9 = _mm512_madd52hi_epu64(acc512h9,KZ_0_9,tmpq512);
	__m512i tmpZero512h10 = _mm512_madd52hi_epu64(acc512h10,KZ_0_10,tmpq512);
	__m512i tmpZero512h11 = _mm512_madd52hi_epu64(acc512h11,KZ_0_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_1_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_1_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_1_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_1_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_1_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_1_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_1_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_1_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_1_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_1_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_1_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_1_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_1_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_1_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_1_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_1_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_1_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_1_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_1_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_1_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_1_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_1_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_1_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_1_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_2_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_2_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_2_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_2_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_2_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_2_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_2_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_2_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_2_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_2_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_2_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_2_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_2_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_2_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_2_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_2_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_2_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_2_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_2_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_2_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_2_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_2_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_2_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_2_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_3_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_3_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_3_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_3_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_3_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_3_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_3_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_3_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_3_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_3_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_3_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_3_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_3_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_3_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_3_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_3_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_3_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_3_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_3_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_3_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_3_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_3_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_3_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_3_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_4_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_4_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_4_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_4_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_4_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_4_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_4_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_4_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_4_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_4_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_4_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_4_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_4_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_4_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_4_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_4_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_4_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_4_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_4_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_4_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_4_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_4_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_4_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_4_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_5_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_5_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_5_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_5_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_5_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_5_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_5_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_5_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_5_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_5_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_5_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_5_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_5_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_5_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_5_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_5_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_5_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_5_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_5_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_5_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_5_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_5_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_5_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_5_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_6_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_6_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_6_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_6_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_6_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_6_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_6_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_6_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_6_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_6_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_6_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_6_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_6_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_6_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_6_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_6_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_6_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_6_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_6_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_6_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_6_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_6_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_6_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_6_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_0);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_7_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_7_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_7_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_7_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_7_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_7_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_7_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_7_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_7_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_7_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_7_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_7_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_7_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_7_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_7_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_7_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_7_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_7_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_7_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_7_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_7_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_7_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_7_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_7_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_8_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_8_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_8_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_8_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_8_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_8_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_8_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_8_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_8_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_8_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_8_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_8_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_8_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_8_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_8_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_8_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_8_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_8_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_8_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_8_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_8_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_8_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_8_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_8_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_9_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_9_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_9_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_9_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_9_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_9_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_9_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_9_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_9_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_9_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_9_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_9_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_9_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_9_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_9_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_9_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_9_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_9_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_9_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_9_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_9_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_9_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_9_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_9_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_10_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_10_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_10_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_10_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_10_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_10_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_10_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_10_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_10_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_10_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_10_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_10_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_10_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_10_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_10_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_10_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_10_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_10_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_10_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_10_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_10_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_10_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_10_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_10_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_11_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_11_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_11_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_11_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_11_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_11_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_11_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_11_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_11_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_11_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_11_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_11_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_11_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_11_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_11_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_11_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_11_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_11_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_11_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_11_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_11_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_11_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_11_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_11_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_12_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_12_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_12_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_12_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_12_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_12_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_12_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_12_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_12_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_12_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_12_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_12_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_12_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_12_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_12_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_12_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_12_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_12_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_12_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_12_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_12_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_12_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_12_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_12_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_13_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_13_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_13_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_13_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_13_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_13_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_13_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_13_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_13_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_13_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_13_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_13_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_13_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_13_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_13_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_13_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_13_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_13_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_13_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_13_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_13_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_13_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_13_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_13_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_14_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_14_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_14_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_14_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_14_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_14_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_14_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_14_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_14_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_14_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_14_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_14_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_14_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_14_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_14_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_14_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_14_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_14_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_14_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_14_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_14_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_14_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_14_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_14_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_1);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_15_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_15_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_15_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_15_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_15_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_15_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_15_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_15_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_15_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_15_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_15_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_15_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_15_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_15_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_15_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_15_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_15_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_15_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_15_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_15_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_15_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_15_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_15_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_15_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_16_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_16_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_16_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_16_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_16_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_16_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_16_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_16_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_16_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_16_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_16_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_16_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_16_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_16_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_16_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_16_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_16_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_16_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_16_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_16_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_16_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_16_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_16_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_16_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_17_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_17_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_17_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_17_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_17_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_17_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_17_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_17_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_17_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_17_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_17_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_17_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_17_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_17_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_17_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_17_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_17_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_17_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_17_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_17_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_17_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_17_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_17_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_17_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_18_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_18_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_18_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_18_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_18_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_18_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_18_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_18_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_18_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_18_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_18_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_18_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_18_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_18_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_18_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_18_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_18_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_18_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_18_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_18_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_18_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_18_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_18_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_18_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_19_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_19_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_19_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_19_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_19_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_19_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_19_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_19_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_19_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_19_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_19_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_19_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_19_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_19_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_19_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_19_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_19_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_19_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_19_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_19_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_19_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_19_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_19_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_19_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_20_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_20_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_20_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_20_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_20_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_20_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_20_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_20_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_20_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_20_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_20_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_20_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_20_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_20_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_20_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_20_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_20_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_20_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_20_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_20_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_20_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_20_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_20_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_20_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_21_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_21_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_21_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_21_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_21_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_21_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_21_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_21_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_21_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_21_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_21_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_21_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_21_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_21_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_21_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_21_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_21_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_21_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_21_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_21_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_21_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_21_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_21_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_21_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_22_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_22_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_22_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_22_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_22_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_22_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_22_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_22_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_22_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_22_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_22_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_22_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_22_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_22_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_22_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_22_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_22_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_22_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_22_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_22_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_22_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_22_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_22_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_22_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_2);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_23_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_23_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_23_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_23_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_23_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_23_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_23_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_23_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_23_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_23_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_23_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_23_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_23_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_23_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_23_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_23_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_23_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_23_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_23_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_23_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_23_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_23_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_23_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_23_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_24_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_24_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_24_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_24_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_24_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_24_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_24_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_24_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_24_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_24_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_24_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_24_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_24_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_24_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_24_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_24_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_24_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_24_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_24_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_24_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_24_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_24_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_24_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_24_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_25_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_25_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_25_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_25_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_25_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_25_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_25_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_25_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_25_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_25_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_25_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_25_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_25_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_25_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_25_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_25_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_25_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_25_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_25_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_25_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_25_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_25_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_25_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_25_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_26_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_26_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_26_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_26_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_26_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_26_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_26_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_26_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_26_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_26_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_26_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_26_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_26_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_26_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_26_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_26_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_26_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_26_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_26_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_26_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_26_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_26_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_26_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_26_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_27_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_27_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_27_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_27_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_27_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_27_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_27_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_27_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_27_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_27_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_27_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_27_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_27_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_27_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_27_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_27_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_27_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_27_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_27_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_27_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_27_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_27_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_27_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_27_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_28_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_28_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_28_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_28_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_28_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_28_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_28_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_28_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_28_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_28_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_28_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_28_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_28_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_28_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_28_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_28_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_28_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_28_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_28_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_28_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_28_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_28_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_28_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_28_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_29_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_29_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_29_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_29_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_29_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_29_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_29_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_29_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_29_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_29_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_29_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_29_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_29_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_29_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_29_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_29_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_29_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_29_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_29_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_29_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_29_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_29_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_29_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_29_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_30_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_30_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_30_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_30_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_30_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_30_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_30_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_30_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_30_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_30_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_30_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_30_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_30_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_30_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_30_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_30_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_30_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_30_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_30_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_30_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_30_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_30_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_30_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_30_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_3);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_31_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_31_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_31_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_31_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_31_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_31_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_31_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_31_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_31_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_31_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_31_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_31_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_31_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_31_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_31_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_31_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_31_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_31_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_31_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_31_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_31_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_31_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_31_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_31_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_32_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_32_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_32_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_32_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_32_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_32_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_32_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_32_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_32_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_32_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_32_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_32_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_32_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_32_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_32_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_32_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_32_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_32_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_32_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_32_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_32_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_32_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_32_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_32_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_33_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_33_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_33_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_33_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_33_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_33_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_33_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_33_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_33_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_33_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_33_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_33_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_33_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_33_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_33_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_33_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_33_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_33_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_33_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_33_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_33_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_33_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_33_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_33_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_34_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_34_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_34_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_34_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_34_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_34_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_34_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_34_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_34_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_34_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_34_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_34_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_34_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_34_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_34_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_34_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_34_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_34_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_34_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_34_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_34_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_34_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_34_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_34_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_35_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_35_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_35_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_35_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_35_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_35_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_35_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_35_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_35_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_35_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_35_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_35_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_35_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_35_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_35_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_35_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_35_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_35_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_35_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_35_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_35_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_35_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_35_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_35_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_36_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_36_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_36_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_36_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_36_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_36_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_36_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_36_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_36_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_36_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_36_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_36_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_36_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_36_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_36_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_36_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_36_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_36_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_36_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_36_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_36_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_36_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_36_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_36_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_37_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_37_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_37_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_37_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_37_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_37_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_37_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_37_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_37_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_37_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_37_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_37_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_37_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_37_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_37_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_37_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_37_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_37_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_37_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_37_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_37_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_37_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_37_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_37_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_38_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_38_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_38_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_38_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_38_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_38_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_38_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_38_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_38_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_38_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_38_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_38_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_38_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_38_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_38_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_38_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_38_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_38_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_38_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_38_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_38_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_38_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_38_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_38_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_4);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_39_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_39_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_39_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_39_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_39_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_39_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_39_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_39_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_39_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_39_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_39_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_39_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_39_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_39_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_39_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_39_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_39_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_39_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_39_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_39_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_39_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_39_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_39_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_39_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_40_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_40_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_40_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_40_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_40_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_40_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_40_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_40_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_40_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_40_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_40_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_40_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_40_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_40_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_40_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_40_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_40_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_40_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_40_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_40_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_40_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_40_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_40_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_40_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_41_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_41_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_41_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_41_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_41_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_41_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_41_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_41_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_41_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_41_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_41_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_41_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_41_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_41_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_41_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_41_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_41_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_41_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_41_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_41_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_41_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_41_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_41_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_41_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_42_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_42_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_42_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_42_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_42_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_42_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_42_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_42_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_42_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_42_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_42_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_42_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_42_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_42_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_42_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_42_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_42_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_42_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_42_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_42_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_42_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_42_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_42_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_42_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_43_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_43_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_43_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_43_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_43_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_43_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_43_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_43_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_43_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_43_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_43_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_43_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_43_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_43_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_43_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_43_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_43_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_43_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_43_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_43_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_43_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_43_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_43_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_43_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_44_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_44_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_44_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_44_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_44_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_44_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_44_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_44_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_44_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_44_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_44_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_44_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_44_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_44_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_44_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_44_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_44_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_44_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_44_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_44_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_44_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_44_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_44_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_44_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_45_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_45_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_45_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_45_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_45_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_45_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_45_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_45_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_45_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_45_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_45_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_45_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_45_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_45_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_45_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_45_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_45_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_45_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_45_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_45_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_45_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_45_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_45_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_45_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_46_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_46_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_46_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_46_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_46_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_46_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_46_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_46_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_46_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_46_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_46_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_46_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_46_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_46_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_46_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_46_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_46_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_46_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_46_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_46_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_46_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_46_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_46_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_46_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_5);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_47_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_47_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_47_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_47_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_47_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_47_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_47_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_47_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_47_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_47_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_47_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_47_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_47_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_47_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_47_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_47_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_47_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_47_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_47_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_47_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_47_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_47_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_47_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_47_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_48_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_48_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_48_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_48_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_48_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_48_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_48_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_48_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_48_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_48_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_48_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_48_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_48_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_48_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_48_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_48_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_48_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_48_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_48_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_48_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_48_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_48_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_48_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_48_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_49_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_49_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_49_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_49_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_49_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_49_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_49_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_49_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_49_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_49_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_49_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_49_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_49_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_49_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_49_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_49_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_49_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_49_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_49_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_49_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_49_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_49_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_49_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_49_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_50_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_50_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_50_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_50_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_50_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_50_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_50_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_50_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_50_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_50_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_50_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_50_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_50_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_50_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_50_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_50_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_50_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_50_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_50_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_50_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_50_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_50_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_50_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_50_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_51_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_51_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_51_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_51_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_51_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_51_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_51_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_51_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_51_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_51_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_51_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_51_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_51_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_51_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_51_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_51_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_51_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_51_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_51_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_51_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_51_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_51_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_51_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_51_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_52_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_52_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_52_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_52_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_52_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_52_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_52_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_52_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_52_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_52_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_52_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_52_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_52_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_52_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_52_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_52_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_52_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_52_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_52_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_52_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_52_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_52_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_52_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_52_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_53_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_53_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_53_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_53_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_53_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_53_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_53_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_53_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_53_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_53_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_53_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_53_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_53_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_53_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_53_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_53_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_53_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_53_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_53_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_53_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_53_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_53_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_53_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_53_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_54_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_54_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_54_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_54_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_54_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_54_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_54_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_54_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_54_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_54_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_54_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_54_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_54_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_54_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_54_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_54_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_54_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_54_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_54_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_54_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_54_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_54_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_54_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_54_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_6);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_55_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_55_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_55_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_55_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_55_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_55_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_55_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_55_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_55_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_55_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_55_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_55_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_55_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_55_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_55_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_55_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_55_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_55_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_55_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_55_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_55_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_55_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_55_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_55_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_7);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_56_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_56_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_56_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_56_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_56_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_56_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_56_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_56_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_56_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_56_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_56_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_56_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_56_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_56_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_56_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_56_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_56_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_56_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_56_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_56_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_56_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_56_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_56_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_56_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_7);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_57_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_57_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_57_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_57_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_57_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_57_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_57_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_57_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_57_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_57_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_57_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_57_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_57_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_57_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_57_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_57_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_57_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_57_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_57_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_57_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_57_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_57_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_57_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_57_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_7);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_58_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_58_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_58_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_58_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_58_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_58_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_58_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_58_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_58_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_58_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_58_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_58_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_58_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_58_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_58_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_58_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_58_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_58_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_58_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_58_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_58_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_58_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_58_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_58_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_7);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_59_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_59_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_59_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_59_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_59_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_59_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_59_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_59_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_59_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_59_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_59_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_59_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_59_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_59_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_59_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_59_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_59_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_59_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_59_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_59_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_59_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_59_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_59_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_59_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_7);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_60_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_60_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_60_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_60_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_60_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_60_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_60_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_60_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_60_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_60_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_60_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_60_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_60_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_60_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_60_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_60_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_60_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_60_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_60_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_60_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_60_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_60_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_60_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_60_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_7);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_61_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_61_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_61_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_61_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_61_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_61_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_61_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_61_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_61_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_61_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_61_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_61_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_61_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_61_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_61_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_61_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_61_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_61_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_61_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_61_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_61_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_61_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_61_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_61_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_7);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_62_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_62_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_62_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_62_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_62_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_62_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_62_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_62_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_62_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_62_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_62_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_62_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_62_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_62_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_62_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_62_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_62_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_62_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_62_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_62_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_62_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_62_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_62_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_62_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_7);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_63_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_63_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_63_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_63_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_63_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_63_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_63_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_63_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_63_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_63_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_63_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_63_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_63_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_63_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_63_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_63_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_63_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_63_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_63_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_63_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_63_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_63_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_63_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_63_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_8);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_64_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_64_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_64_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_64_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_64_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_64_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_64_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_64_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_64_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_64_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_64_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_64_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_64_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_64_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_64_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_64_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_64_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_64_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_64_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_64_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_64_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_64_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_64_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_64_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_8);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_65_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_65_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_65_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_65_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_65_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_65_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_65_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_65_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_65_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_65_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_65_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_65_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_65_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_65_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_65_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_65_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_65_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_65_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_65_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_65_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_65_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_65_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_65_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_65_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_8);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_66_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_66_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_66_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_66_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_66_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_66_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_66_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_66_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_66_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_66_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_66_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_66_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_66_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_66_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_66_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_66_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_66_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_66_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_66_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_66_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_66_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_66_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_66_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_66_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_8);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_67_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_67_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_67_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_67_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_67_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_67_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_67_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_67_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_67_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_67_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_67_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_67_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_67_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_67_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_67_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_67_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_67_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_67_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_67_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_67_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_67_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_67_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_67_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_67_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_8);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_68_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_68_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_68_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_68_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_68_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_68_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_68_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_68_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_68_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_68_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_68_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_68_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_68_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_68_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_68_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_68_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_68_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_68_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_68_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_68_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_68_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_68_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_68_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_68_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_8);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_69_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_69_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_69_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_69_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_69_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_69_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_69_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_69_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_69_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_69_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_69_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_69_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_69_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_69_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_69_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_69_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_69_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_69_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_69_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_69_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_69_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_69_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_69_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_69_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_8);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_70_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_70_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_70_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_70_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_70_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_70_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_70_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_70_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_70_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_70_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_70_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_70_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_70_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_70_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_70_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_70_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_70_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_70_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_70_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_70_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_70_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_70_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_70_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_70_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_8);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_71_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_71_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_71_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_71_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_71_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_71_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_71_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_71_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_71_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_71_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_71_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_71_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_71_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_71_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_71_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_71_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_71_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_71_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_71_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_71_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_71_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_71_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_71_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_71_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_9);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_72_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_72_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_72_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_72_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_72_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_72_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_72_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_72_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_72_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_72_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_72_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_72_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_72_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_72_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_72_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_72_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_72_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_72_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_72_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_72_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_72_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_72_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_72_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_72_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_9);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_73_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_73_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_73_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_73_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_73_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_73_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_73_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_73_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_73_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_73_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_73_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_73_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_73_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_73_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_73_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_73_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_73_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_73_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_73_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_73_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_73_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_73_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_73_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_73_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_9);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_74_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_74_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_74_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_74_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_74_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_74_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_74_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_74_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_74_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_74_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_74_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_74_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_74_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_74_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_74_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_74_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_74_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_74_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_74_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_74_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_74_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_74_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_74_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_74_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_9);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_75_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_75_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_75_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_75_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_75_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_75_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_75_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_75_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_75_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_75_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_75_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_75_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_75_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_75_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_75_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_75_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_75_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_75_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_75_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_75_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_75_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_75_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_75_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_75_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_9);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_76_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_76_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_76_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_76_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_76_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_76_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_76_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_76_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_76_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_76_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_76_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_76_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_76_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_76_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_76_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_76_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_76_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_76_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_76_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_76_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_76_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_76_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_76_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_76_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_9);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_77_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_77_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_77_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_77_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_77_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_77_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_77_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_77_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_77_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_77_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_77_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_77_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_77_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_77_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_77_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_77_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_77_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_77_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_77_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_77_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_77_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_77_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_77_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_77_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_9);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_78_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_78_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_78_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_78_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_78_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_78_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_78_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_78_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_78_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_78_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_78_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_78_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_78_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_78_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_78_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_78_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_78_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_78_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_78_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_78_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_78_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_78_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_78_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_78_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_9);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_79_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_79_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_79_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_79_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_79_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_79_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_79_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_79_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_79_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_79_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_79_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_79_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_79_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_79_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_79_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_79_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_79_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_79_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_79_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_79_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_79_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_79_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_79_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_79_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_10);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_80_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_80_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_80_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_80_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_80_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_80_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_80_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_80_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_80_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_80_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_80_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_80_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_80_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_80_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_80_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_80_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_80_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_80_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_80_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_80_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_80_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_80_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_80_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_80_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_10);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_81_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_81_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_81_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_81_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_81_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_81_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_81_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_81_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_81_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_81_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_81_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_81_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_81_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_81_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_81_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_81_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_81_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_81_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_81_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_81_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_81_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_81_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_81_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_81_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_10);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_82_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_82_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_82_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_82_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_82_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_82_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_82_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_82_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_82_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_82_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_82_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_82_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_82_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_82_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_82_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_82_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_82_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_82_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_82_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_82_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_82_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_82_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_82_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_82_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_10);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_83_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_83_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_83_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_83_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_83_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_83_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_83_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_83_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_83_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_83_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_83_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_83_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_83_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_83_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_83_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_83_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_83_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_83_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_83_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_83_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_83_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_83_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_83_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_83_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_4,q512_10);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_84_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_84_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_84_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_84_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_84_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_84_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_84_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_84_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_84_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_84_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_84_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_84_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_84_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_84_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_84_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_84_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_84_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_84_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_84_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_84_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_84_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_84_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_84_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_84_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_5,q512_10);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_85_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_85_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_85_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_85_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_85_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_85_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_85_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_85_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_85_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_85_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_85_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_85_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_85_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_85_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_85_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_85_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_85_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_85_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_85_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_85_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_85_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_85_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_85_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_85_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_6,q512_10);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_86_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_86_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_86_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_86_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_86_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_86_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_86_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_86_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_86_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_86_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_86_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_86_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_86_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_86_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_86_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_86_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_86_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_86_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_86_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_86_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_86_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_86_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_86_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_86_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_7,q512_10);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_87_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_87_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_87_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_87_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_87_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_87_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_87_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_87_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_87_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_87_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_87_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_87_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_87_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_87_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_87_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_87_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_87_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_87_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_87_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_87_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_87_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_87_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_87_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_87_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_0,q512_11);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_88_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_88_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_88_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_88_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_88_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_88_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_88_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_88_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_88_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_88_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_88_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_88_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_88_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_88_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_88_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_88_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_88_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_88_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_88_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_88_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_88_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_88_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_88_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_88_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_1,q512_11);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_89_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_89_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_89_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_89_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_89_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_89_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_89_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_89_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_89_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_89_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_89_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_89_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_89_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_89_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_89_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_89_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_89_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_89_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_89_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_89_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_89_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_89_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_89_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_89_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_2,q512_11);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_90_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_90_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_90_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_90_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_90_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_90_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_90_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_90_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_90_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_90_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_90_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_90_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_90_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_90_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_90_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_90_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_90_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_90_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_90_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_90_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_90_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_90_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_90_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_90_11,tmpq512);

	tmpq512 = _mm512_permutexvar_epi64(idx_3,q512_11);
	tmpZero512l0 = _mm512_madd52lo_epu64(tmpZero512l0,KZ_91_0,tmpq512);
	tmpZero512l1 = _mm512_madd52lo_epu64(tmpZero512l1,KZ_91_1,tmpq512);
	tmpZero512l2 = _mm512_madd52lo_epu64(tmpZero512l2,KZ_91_2,tmpq512);
	tmpZero512l3 = _mm512_madd52lo_epu64(tmpZero512l3,KZ_91_3,tmpq512);
	tmpZero512l4 = _mm512_madd52lo_epu64(tmpZero512l4,KZ_91_4,tmpq512);
	tmpZero512l5 = _mm512_madd52lo_epu64(tmpZero512l5,KZ_91_5,tmpq512);
	tmpZero512l6 = _mm512_madd52lo_epu64(tmpZero512l6,KZ_91_6,tmpq512);
	tmpZero512l7 = _mm512_madd52lo_epu64(tmpZero512l7,KZ_91_7,tmpq512);
	tmpZero512l8 = _mm512_madd52lo_epu64(tmpZero512l8,KZ_91_8,tmpq512);
	tmpZero512l9 = _mm512_madd52lo_epu64(tmpZero512l9,KZ_91_9,tmpq512);
	tmpZero512l10 = _mm512_madd52lo_epu64(tmpZero512l10,KZ_91_10,tmpq512);
	tmpZero512l11 = _mm512_madd52lo_epu64(tmpZero512l11,KZ_91_11,tmpq512);
	tmpZero512h0 = _mm512_madd52hi_epu64(tmpZero512h0,KZ_91_0,tmpq512);
	tmpZero512h1 = _mm512_madd52hi_epu64(tmpZero512h1,KZ_91_1,tmpq512);
	tmpZero512h2 = _mm512_madd52hi_epu64(tmpZero512h2,KZ_91_2,tmpq512);
	tmpZero512h3 = _mm512_madd52hi_epu64(tmpZero512h3,KZ_91_3,tmpq512);
	tmpZero512h4 = _mm512_madd52hi_epu64(tmpZero512h4,KZ_91_4,tmpq512);
	tmpZero512h5 = _mm512_madd52hi_epu64(tmpZero512h5,KZ_91_5,tmpq512);
	tmpZero512h6 = _mm512_madd52hi_epu64(tmpZero512h6,KZ_91_6,tmpq512);
	tmpZero512h7 = _mm512_madd52hi_epu64(tmpZero512h7,KZ_91_7,tmpq512);
	tmpZero512h8 = _mm512_madd52hi_epu64(tmpZero512h8,KZ_91_8,tmpq512);
	tmpZero512h9 = _mm512_madd52hi_epu64(tmpZero512h9,KZ_91_9,tmpq512);
	tmpZero512h10 = _mm512_madd52hi_epu64(tmpZero512h10,KZ_91_10,tmpq512);
	tmpZero512h11 = _mm512_madd52hi_epu64(tmpZero512h11,KZ_91_11,tmpq512);

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
	carry = _mm512_srli_epi64(tmpZero512l7,52);
	tmpZero512h7 = _mm512_add_epi64(carry,tmpZero512h7);
	carry = _mm512_srli_epi64(tmpZero512l8,52);
	tmpZero512h8 = _mm512_add_epi64(carry,tmpZero512h8);
	carry = _mm512_srli_epi64(tmpZero512l9,52);
	tmpZero512h9 = _mm512_add_epi64(carry,tmpZero512h9);
	carry = _mm512_srli_epi64(tmpZero512l10,52);
	tmpZero512h10 = _mm512_add_epi64(carry,tmpZero512h10);
	carry = _mm512_srli_epi64(tmpZero512l11,52);
	tmpZero512h11 = _mm512_add_epi64(carry,tmpZero512h11);

	_mm512_store_epi64(rop,tmpZero512h0);
	_mm512_store_epi64(rop+8,tmpZero512h1);
	_mm512_store_epi64(rop+16,tmpZero512h2);
	_mm512_store_epi64(rop+24,tmpZero512h3);
	_mm512_store_epi64(rop+32,tmpZero512h4);
	_mm512_store_epi64(rop+40,tmpZero512h5);
	_mm512_store_epi64(rop+48,tmpZero512h6);
	_mm512_store_epi64(rop+56,tmpZero512h7);
	_mm512_store_epi64(rop+64,tmpZero512h8);
	_mm512_store_epi64(rop+72,tmpZero512h9);
	_mm512_store_epi64(rop+80,tmpZero512h10);
	_mm512_store_epi64(rop+88,tmpZero512h11);


}
