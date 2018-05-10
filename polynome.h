#include <stdlib.h>
struct terme {
	int deg;
	float cof;
};

typedef struct terme poly;
typedef struct {
	terme ter;
	struct terme *next;
	struct terme *pred;
} polynome;

void afficher(polynome p);
terme alloc();
terme charger();
void AjouterTerme(terme t, polynome P);
int degre(polynome p);
tete mul_scalaire();
tete mul_monome();
tete add(polynome q, polynome p);
