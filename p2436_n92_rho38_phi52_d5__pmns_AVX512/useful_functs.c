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


	mpz_set_str (modul_p, "15926785601034017652597688965642382288067825175930698716358344026572368065986672663012414611984553289419183160005921730973833172922104722418619405421123439799786864450243239730812998583804723116335621502019505976390375029830451440114798215201069277857994638135635659393811802681357471501026460455234964770195044337163284826543047878226247513417879926777450626391710833885101073846548044443214873631989320807409429937976557972213764087705454773110694164608530550543060968501684715090365738317974156965140615237650491169382331346715007267520044707061064695349759840758203818248732191051277899830638189202761019641789630623949450619549067324117844609086999534727777539125675140524476569271034435623443713764525024256006072071247340801939", 10);

	mpz_set_str (gama_pow[0], "10047267378951463587391799233756837384168044594143486366741374895358028969516277754038452899853889371006685496982932047068549660322538012627519968557781579981344262198638849742800944524974106441066183004203383021455668756353618613067399175410895879013753867605615110267843420087107808558574523444888557212930655371350319074485915994957351446633920440932275733972306007619206910375888335543506536107174346387996569629068041064464948410663654522055249600861453970894834831322855432928704619986932640603522588344812421331890987263798221007185896940488934865277356069332959902161170145847989564418553138975993193280324552407148560411721525159366397278794532521240730796124925604102437317256667414685841495417798496398486646409579885458957", 10);
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

