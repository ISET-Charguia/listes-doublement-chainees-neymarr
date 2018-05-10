#include "poly.h"  

void afficher(polynome p) {
	polynome pp = p;
	printf("P(x)=");
	if (pp == NULL)
		printf(" \n\nerreur le polynome est vide\n\n ");
	else
		do {
			printf("+%dx^%d ", pp->ter->cof, pp->ter->deg);
			pp = pp->next;
		} while (pp != NULL);
}

terme alloc() {
	terme pt;
	pt = (terme) malloc(sizeof(terme));
	if (pt == NULL)
		printf(" erreue de l'allocation ");
	return (pt);
}

terme charger() {
	terme pt;
	int deg;
	float coef;
	ppoly pt;
	pt = alloc();
	printf("\nentrer le puissance de monome  : ", a);
	scanf("%d", &a);
	printf("entrer le coefficient de monome: ", b);
	scanf("%f", &b);
	pt->deg = a;
	pt->cof = b;
	return (pt);
}

void ajouterTerme(terme t, polynome p) {
	polynome pp = p, pt, pc;
	pt = charger();
if (pt->coef == 0)
else {
	if (pp == NULL) {
		pp->coef = t->coef;
		pp->deg = t->deg;
		pp->next = NULL;
		pp->pred = NULL;
	} else {
		while (pp != NULL) {
			if ((pp->deg) > (pt->deg))
			pp = pp->next;
			else {
				if ((pp->deg) == (pt->deg)) {
					pp->coef += pt->coef;
				} else {
					if ((pp->pred) == NULL) {
						pp->pred = pt;
						pt->next = pp;
						pt->pred = NULL;
					} else {
						pc = pp->pred;
						pp->pred = pt;
						pt->next = pp;
						pc->next = pt;
						pt->pred = pc;
					}
				}
			}

		}

	}
}
}
polynome prod(polynome q, polynome p) {
polynome pp = p, pq = q, ps, *pn = ps, p1;
ps->pred = NULL;
ps->next = NULL;
terme pt;
if (pp == NULL)
	return q;
if (pq == NULL)
	return p;

if (pp != NULL && pq != NULL) {
	while (pq != NULL) {
		p1->ter->coef = pp->ter->coef*pq->ter->coef;
		p1->ter->degre=pp->ter->deg+pq->ter->deg;
		p1->next = NUll;
		pq = pq->next;
		ps->next = p1;
		p1->pred = pn;
		pn->next = p1;
	if (pp->next == NULL && pq != NULL) {
		pp=p;
	}
}
	
return ps;
}

polynome div(polynome q, polynome p) {
polynome pp = p, pq = q, ps, *pn = ps, p1;
ps->pred = NULL;
ps->next = NULL;
terme pt;
if (pp == NULL)
	return q;
if (pq == NULL)
	return p;

if (pq->deg == pp->deg) {
	pt->ter->coef = pp->ter->coef / pq->ter->coef;
	pq = pq->next;
} else {
	if (pq->ter->deg > pp->ter->deg) {
		pq = pq->next;
	} else
		pp = pp->next;
}
ps->ter = pt;
ps->next = NULL;
ps->pred = NULL;

if (pp == NULL && pq != NULL) {
	pp->next = pq;
	pq->pred = pp;
}

if (pp != NULL && pq != NULL) {
	while (pq != NULL) {
		if (pq->ter->deg == pp->ter->deg) {
			p1->ter->coef = pp->ter->coef / pq->ter->coef;
			p1->next = NUll;
			pq = pq->next;
		} else {
			if (pq->ter->deg > pp->ter->deg) {
				pq = pq->next;
			} else
				pp = pp->next;
		}
		ps->next = p1;
		p1->pred = pn;
		pn->next = p1;
	}
	if (pp == NULL && pq != NULL) {
		pp->next = pq;
		pq->pred = pp;
	}

}
return ps;
}

polynome add(polynome q, polynome p) {
polynome pp = p, pq = q, ps, *pn = ps, p1;
ps->pred = NULL;
ps->next = NULL;
terme pt;
if (pp == NULL)
	return q;
if (pq == NULL)
	return p;

if (pq->ter->deg == pp->ter->deg) {
	pt->ter->coef = pp->ter->coef + pq->ter->coef;
	pq = pq->next;
} else {
	if (pq->ter->deg > pp->ter->deg) {
		pq = pq->next;
	} else
		pp = pp->next;
}
ps->ter = pt;
ps->next = NULL;
ps->pred = NULL;

if (pp == NULL && pq != NULL) {
	pp->next = pq;
	pq->pred = pp;
}

if (pp != NULL && pq != NULL) {
	while (pq != NULL) {
		if (pq->ter->deg == pp->ter->deg) {
			p1->ter->coef = pp->ter->coef + pq->ter->coef;
			p1->next = NUll;
			pq = pq->next;
		} else {
			if (pq->ter->deg > pp->ter->deg) {
				pq = pq->next;
			} else
				pp = pp->next;
		}
		ps->next = p1;
		p1->pred = pn;
		pn->next = p1;
	}
	if (pp == NULL && pq != NULL) {
		pp->next = pq;
		pq->pred = pp;
	}

}
return ps;
}
