#include "useful_functs.h"


//~ Assumes allocation already done for 'rop'.
//~ IMPORTANT : convertion to montgomery domain will be done here
void from_int_to_pmns(int64_t *rop, mpz_t op){
	int i;
	mpz_t tmp;
	int128 tmp_poly[NB_COEFF];
	int128 tmp_sum[NB_COEFF];

	mpz_init_set(tmp, op);

	for(i=0; i<NB_COEFF; i++){
		rop[i] = 0;
		tmp_sum[i] = 0;
	}

	if(tmp->_mp_size == 0)
		return;

	i = 0;
	while(tmp->_mp_size && (i < NB_COEFF)){
		scalar_mult_lpoly(tmp_poly, polys_P[i++], (tmp->_mp_d[0]) & CONV_MASK);
		add_lpoly(tmp_sum, tmp_sum, tmp_poly);

		mpz_tdiv_q_2exp (tmp, tmp, RHO_LOG2);
	}

	internal_reduction(rop, tmp_sum);

	mpz_clear(tmp);
}

//~ Assumes "rop" already initialized.
//~ IMPORTANT : convertion from montgomery domain will be done here.
void from_pmns_to_int(mpz_t rop, int64_t *op, mpz_t modul_p, mpz_t gama_pow[POLY_DEG]){
	int i;
	mpz_t tmp_sum;
	int64_t tmp_conv[NB_COEFF];

	mpz_init(tmp_sum);

	//~ convertion out of mont domain
	from_mont_domain(tmp_conv, op);

	mpz_set_si(rop, tmp_conv[0]);
	for(i=0; i<POLY_DEG; i++){
		mpz_mul_si(tmp_sum, gama_pow[i], tmp_conv[i+1]);
		mpz_add(rop, rop, tmp_sum);
	}
	mpz_mod (rop, rop, modul_p);

	mpz_clear(tmp_sum);
}

//~ computes : op/phi
void from_mont_domain(int64_t *rop, int64_t *op){

	int i;
	int128 tmp[NB_COEFF];

	for(i=0; i<NB_COEFF; i++)
		tmp[i] = (int128) op[i];

	internal_reduction(rop, tmp);
}

void init_data(mpz_t modul_p, mpz_t gama_pow[POLY_DEG]){

	int i;
	for(i=0; i<POLY_DEG; i++)
		mpz_init (gama_pow[i]);

	mpz_init (modul_p);


	mpz_set_str (modul_p, "44086236753949207920637983514861383149257673947602698336003597774852228537442538699311552291999148561661591726029663641576052758441960669906270620352648463891883994695765370500089153458240835568711493351886058343122866700575935327093579369959113562548438102717317460199099348558344901561405189134770477807590752201914379009988207710653195485856435654144295742037841143381344551411260972722769130924053142209824561978011640694162404331703907815691233019452200770844011043454636153705415832075077475365834052368934080670114983097318039911463271365937349501964484896058660471705898799666172211417864834006489489773", 10);

	mpz_set_str (gama_pow[0], "15112767104854237061792686006403479443363126373680621669319904403843061164214064853649457597468127541755378126953711134712982453507616648692046461701297387784679264798538896555186555281167725477172880839971910128567631255624381181933040009963763323930170590168055959796032968515171227932186503337745005681184867211419874663959158622182169312861287491991643502480115395960800369170294190509217590621856064533382711589499897951353405563447114841170702457168193823005823203037502120748978752341834604707658005212332107119678960245891104492857932029498239645515166131794320181643946363978265807773281180772931858176", 10);
	for(i=1; i<POLY_DEG; i++){
		mpz_mul (gama_pow[i], gama_pow[i-1], gama_pow[0]);
		mpz_mod (gama_pow[i], gama_pow[i], modul_p);
	}
}

void free_data(mpz_t modul_p, mpz_t gama_pow[POLY_DEG]){
	int i;
	for(i=0; i<POLY_DEG; i++)
		mpz_clear (gama_pow[i]);

	mpz_clear (modul_p);
}

//~ ----------------------------------------------------------------------------------------

//~ return a positive value if pa > pb, zero if pa = pb, or a negative value if pa < pb.
//~ Important : evaluation is done using the corresponding integers modulo 'p'.
int cmp_poly_evals(int64_t *pa, int64_t *pb, mpz_t modul_p, mpz_t gama_pow[POLY_DEG]){
	int rep;
	mpz_t a, b;
	mpz_inits (a, b, NULL);
	from_pmns_to_int(a, pa, modul_p, gama_pow);
	from_pmns_to_int(b, pb, modul_p, gama_pow);
	rep = mpz_cmp (a, b);
	mpz_clears (a, b, NULL);
	return rep;
}

void copy_poly(int64_t *rop, int64_t *op){
	int i;
	for(i=0; i<NB_COEFF; i++)
		rop[i] = op[i];
}

void add_lpoly(int128 *rop, int128 *pa, int128 *pb){
	int j;
	for (j=0; j<NB_COEFF; j++)
		rop[j] = pa[j] + pb[j];
}

//~ assumes 'scalar' and/or coeffs of 'op' small enough to avoid an overflow.
void scalar_mult_lpoly(int128 *rop, int64_t *op, uint64_t scalar){
	int j;
	for (j=0; j<NB_COEFF; j++)
		rop[j] = (int128)op[j] * scalar;
}

void print_element(int64_t *poly){
	int i;
	printf("[");
	for (i=0; i<POLY_DEG; i++)
		printf("%2ld, ", poly[i]);
	printf("%2ld]", poly[POLY_DEG]);
}

