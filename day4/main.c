#include <stdio.h>
#include <math.h>

int main()
{
	double vyska = 1.8;
	double hmotnost = 80.0;

	double bmi = hmotnost / (vyska * vyska);

	printf("%lf\n", bmi);

	if (bmi < 18.5)
	{
		printf("podvaha a min\n");
	}
	else if (bmi < 25)
	{
		printf("idealni vaha\n");
	}
	else if (bmi < 30)
	{
		printf("Nadvaha\n");
	}
	else
	{
		printf("obezita");
	}

	
}