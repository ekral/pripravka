#include <stdio.h>
#include <math.h>

int main()
{
	double urokovaMira = 3.0 / 100 / 12;
	int n = 40 * 12;
	double D = 2000000;

	double v = 1 / (1 + urokovaMira);
	double splatka = (urokovaMira * D) / (1 - pow(v, n));

	printf("%.2lf\n", splatka);

	// splatka 7159.68
	// urok = 5000.00;
	// umor = 7159.68 - 5000.00 = 2159.68
	// nove dluzim = dluh - 2159,68 

	double stavDluhu = D;
	
	for (int i = 0; i < n; i++)
	{
		double urok = stavDluhu * urokovaMira;
		double umor = splatka - urok;
		stavDluhu -= umor;

		printf("%4d %10.2lf %10.2lf %10.2lf %10.2lf\n", i, splatka, urok, umor, stavDluhu);

	}
}