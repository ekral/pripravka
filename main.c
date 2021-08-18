#include <stdio.h>
#include <math.h>

int main()
{
	double i = 3.0 / 100.0 / 12.0;
	double D = 2000000;
	int n = 30 * 12;
	
	double v = 1 / (1 + i);

	double A = (i * D) / (1 - pow(v, n));
	printf("%lf", A);
}