#include <stdio.h>
#include <math.h>

int main()
{
	int test1 = 75;
	int test2 = 0;
	int test3 = 75;
	
	// 1. napiste zda student splnil kazdy ze tri testu na vice nez 50
	if (test1 > 50 && test2 > 50 && test3 > 50)
	{
		printf("splnil kazdy\n");
	}

	if (test1 > 50)
	{
		if (test2 > 50)
		{
			if (test3 > 50)
			{
				printf("splnil kazdy\n");
			}
		}
	}

	// 2a. napiste zda student alespon jeden na vice nez 50
	if (test1 > 50 || test2 > 50 || test3 > 50)
	{
		printf("splnil kazdy\n");
	}

	// 2b. Slozitejsi ukol: napsat 2a bez operatoru || a bez pomocne promenne, ciste pomoci if else
	if (test1 > 50)
	{
		printf("splnil jeden\n");
	}
	else if (test2 > 50)
	{
		printf("splnil jeden\n");
	}
	else if (test3 > 50)
	{
		printf("splnil jeden\n");
	}
	else
	{
		printf("zadny\n");
	}
	
	

	// 3. Slozitejsi ukol: napiste zda splnil presne dva testy
	if ((test1 > 50 && test2 > 50 && test3 < 50) 
		|| (test1 > 50 && test2 < 50 && test3 > 50) 
		|| (test1 < 50 && test2 > 50 && test3 > 50))
	{
		printf("splnil presne dva\n");
	}

	int pocet = 0;
	if (test1 > 50) ++pocet;
	if (test2 > 50) ++pocet;
	if (test3 > 50) ++pocet;

	if (pocet == 2)
	{
		printf("splnil presne dva\n");
	}
	
}