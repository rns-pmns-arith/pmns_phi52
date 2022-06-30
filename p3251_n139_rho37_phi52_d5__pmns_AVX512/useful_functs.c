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


	mpz_set_str (modul_p, "3488943444255984364423638560731936428715107471723434054443952878868966919559379757428364349975781134968509334011980095527219462812461399771310244963248735999426700992090962902533883577229606875094117258741240688354631659733595050827192335631065187160955376529971403733009933931908648669900859281899372924380630271154780195968191696533001063230839809281455678505250494866870781190074054358018048148778014881789500760707801931505502405218013479877169969055294695492106267316438134502313779569945022254877476581257902983722757598039734354320138759717939447050291943920789957487741792306326465351936129660504659379073456789393144147455519373745409507050627214056259245664156620348835904974622867848099392592473209749829084065122386071954467135944925632782097627505111743756462706029263492488732968950814159737211755062471407851531914473431428918003810660327243409693357152864209017449181337883131283254172508954989673076520796121761852136826119438420446446568445641649839317681986361", 10);

	mpz_set_str (gama_pow[0], "1945777813932635191659514119545785254644225134748027382568305359794500470246283382247114465390796631561836145531110592237581489331054719284801544098666742467370823416907900081349239298646827936519696849531574331768304467590750805988873391108253340862621048719069504827211756114902947220346690616578489051555151005923596942068453420423764177391729127475307578362616993793215006999716756352904808159652535267534101924451367416595457073911055755144245251401085117956512010904446232475938946209794384167767959814741956376158027480261459035678860957867652664594842504595277904307557354941182499485215901963074436263015566281470900556680349376796202577413182375889248868511326190474180746668620482468840183577180900794644692436771319209607659321589584832107421290099808215558235576242535755068220292158923505210360354834954169371998968435177328395245900254564399325660573364349661948287527673267365158940063690743862839723516059977436774918164981273141138810940181767671265251910620417", 10);
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

