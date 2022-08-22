#include <stdio.h>
#include <math.h>

int main() 
{
	// http://www.aristoteles.cz/matematika/financni_matematika/hypoteka-vypocet.php

	double D = 6000000.0;
	int pocetLet = 30;
	int pocetSplatekRocne = 12;
	int urok = 6;

	int n = pocetLet * pocetSplatekRocne;
	double i = urok / 100.0 / pocetSplatekRocne;
	printf("i: %lf\n", i);

	// ukazka mocniny
	double mocnina = pow(2.0, 8.0);
	printf("%lf\n", mocnina);

	return 1;
}
