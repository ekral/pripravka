#include <stdio.h>

int main()
{
	char* text = "neco";
	int x = 2;

	printf("text: %s x: %d\n", text, x);

	// Ukol 1
	// a) vypiste nejmensi hodnotu ze tri promennych a,b,c

	int a = 1;
	int b = 3;
	int c = 4;

	int min = 0;
	
	if (a < b)
	{
		if (c < a)
		{
			min = a;
		}
		else
		{
			min = b;
		}
	}
	else
	{
		if (b < c)
		{
			min = b;
		}
		else
		{
			min = c;
		}
	}

	printf("%d\n", min);

	if (a < b && a < c)
	{
		min = a;
	}
	else if (b < c)
	{
		min = b;
	}
	else
	{
		min = c;
	}

	printf("%d\n", min);
	// a
	// b
	// c
	
	// b) vypiste druhou nejmensi hodnotu
	if ((a > b && a < c) || (a > c && a < b))
	{
		printf("%d\n", a);
	}
	else if ((b > a && b < c) || (b > c && b < a))
	{
		printf("%d\n", b);
	}
	else
	{
		printf("%d\n", c);
	}

	// c) seradte hodnoty v promennych a,b,c od nejmensi po nejvetsi
	// v promenne a bude nejmensi, v b prostredni a v c nejvetsi

	// Ukol 2
	int testA = 20;
	int testB = 30;
	int testC = 20;

	// otestujte, zda student splnil presne dva testy (vice nez 50 bodu)
	// a) vytvorte variantu bez pomocne promenne
	if ((a > 50 && b > 50 && c <= 50) || (a > 50 && b <= 50 && c > 50) || (a <= 50 && b > 50 && c > 50))
	{
		printf("presne dva");
	}
	
	// b) s pomocnou promennou
	int pocet = 0;
	if (a > 50) ++pocet;
	if (b > 50) ++pocet;
	if (c > 50) ++pocet;

	if (pocet == 2) printf("presne dva");

	return 1;
}
