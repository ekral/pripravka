#include <stdio.h>
extern void Funkce()
{

}
int main()
{
	// studenti psali testy, mohli ziskat 0 az 100 bodu
	// vypiste na terminal, zda student splnil nebo nesplnil predmet.
	// nepouzivejte operatory && a ||
	// a pomocnou promennou
	
	// podminkou ke splneni predmetu bylo:

	// 1. Alespon jeden test musel byt za vice nez 50 bodu
	int testA = 51;
	int testB = 50;

	if (testA > 50)
	{
		printf("splnil predmet");
	}
	else if(testB > 50)
	{
		printf("splnil predmet");
	}
	else
	{
		printf("nesplnil");
	}

	// 2. Splnil kazdy z testu za vice nez 50 bodu
	char* text = "nesplnil";
	if (testA > 50)
	{
		if (testB > 50)
		{
			text = "splnil predmet";
		}
	}
	
	int x = 3;

	if (x > 0 && x < 100)
	{
		printf("X je vetsi nez 0 a zaroven je x mensi nez 100");
	}

	if (x == 3 || x == 2)
	{
		printf("x se rovna 3 nebo se x rovna 3");
	}

	// Ukoly 1 a 2 prepiste s vyuzitim operatoru && a ||

	return 1;
}
