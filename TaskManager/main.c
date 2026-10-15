#include <stdio.h>

void prikaziIzbornik(void) {
	printf("===== TASK MANAGER =====\n");
	printf("1. Dodaj zadatak\n");
	printf("2. Prikazi zadatke\n");
	printf("0. Izlaz\n");
	printf("========================\n");
}

int main(void) {
	prikaziIzbornik();
	return 0;
}