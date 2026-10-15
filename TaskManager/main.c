#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prikaziIzbornik(void) {
	printf("===== TASK MANAGER =====\n");
	printf("1. Dodaj zadatak\n");
	printf("2. Prikazi zadatke\n");
	printf("3. Broj zadataka\n");
	printf("0. Izlaz\n");
	printf("========================\n");
}

int main(void) {
	int vrijednost = -1;

	while (vrijednost != 0) {
		prikaziIzbornik();
		printf("\nOdaberite opciju: ");
		int rezultat;

		while (1) {
			rezultat = scanf("%d", &vrijednost);

			if (rezultat == 1) {
				break;
			}

			if (rezultat == EOF) {
				printf("\nKraj ulaza. Gasenje programa.\n");
				return 0;
			}

			int c;
			while ((c = getchar()) != '\n' && c != EOF);

			if (c == EOF) {
				printf("\nKraj ulaza. Gasenje programa.\n");
				return 0;
			}

			printf("Neispravan unos. Pokusajte ponovno: ");
		}


		if (vrijednost == 1) { 
			printf("Poruka za dodavanje\n\n");
		}
		else if (vrijednost == 2) {
			printf("Poruka za prikaz\n\n");
		}
		else if (vrijednost == 3) {
			printf("Poruka za broj zadataka\n\n");
		}
		else if(vrijednost < 0 || vrijednost > 3){
			printf("Neispravan unos.\n\n");
		}
	}

	return 0;
}