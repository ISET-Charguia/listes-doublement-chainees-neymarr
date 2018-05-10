#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include "poly.h"

int main(void) {
	int i;
	polynome p, q;
	terme t;
	do {
		printf("\n                        MENU              \n");
		printf("\n 1 = Affichage de polynome");
		printf("\n 2 = Inserer un terme");
		printf("\n 3 = Afficher le degr\é de polynome")
		printf("\n 4 = La somme de deux polynomes");
		printf("\n 5 = Le produit de deux polynomes");
		printf("\n 6 = Diveser le Polynome");
		printf("\n 7 = Convertir un tableau aux polynome");
		printf("\n 8 = Convertir un polynome aux tableau");
		printf("\n 9 = quittez le programme");
		printf("\n\n ENTRER LE NUM DE TACHE QUE VOUS VOULEZ :", i);
		scanf("%d", &i);
		switch (i) {
		case 1:
			Afficher();
			break;
		case 2:
			AjouterTerme(terme t, polynome p);
			break;
		case 3:
			degre(polynome p);
			break;
		case 4:
			add(polynome q,polynome p);
			break;
		case 5:
			prod(polynome p);
			break;
		case 6:
			div();
			break;
		case 7:
			tabToPoly(double *tab, int n);
			break;
		case 8:
			*polyToTab(polynome p);
			break;
		}
	} while (i != 9);
	scanf();
	return 0;
}
