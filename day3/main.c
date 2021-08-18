#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	// student(ka) psal test a uspeli, pokud
	// 1. ziskal(a) vice nez 50 bodu z kazdeho testu
	// 2. ziskal(a) alespon z jednoho testu vice nez 50 bodu
	// napiste ano, pokud student(ka) v testu uspel
	// nebo ne, poukud neuspel
	int test1 = 75;
	int test2 = 75;

	// 1. Uspel v jednom testu
	if (test1 > 50)
	{
		printf("ano");
	}
	else
	{
		printf("ne");
	}

	// 2. Uspel v kazdem ze dvou testu
	if (test1 > 50 && test2 > 50)
	{
		printf("ano");
	}
	else
	{
		printf("ne");
	}

	// 3. Uspel alespon v jednom
	if (test1 > 50 || test2 > 50)
	{
		printf("ano");
	}
	else
	{
		printf("ne");
	}
}