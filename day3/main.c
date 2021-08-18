#include <stdio.h>
#include <math.h>

int main()
{
	double a = 3;
	double b = 4;
	double c = 5;

	// vypocitejte a vypiste obvod trojuhelnika
	double obvod = a + b + c;
	printf("obvod: %.2lf\n", obvod);

	// vypoctejte a vypiste obsah dle Heronova vzorce
    // https://cs.wikipedia.org/wiki/Heron%C5%AFv_vzorec
	double s = (a + b + c) / 2.0;
	double obsah = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("obvod: %.2lf\n", obsah);

}