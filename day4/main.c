#include <stdio.h>
#include <math.h>

int main()
{
	int test1 = 75;
	int test2 = 75;
	int vysledek = test1 > 50;

	if (test1 > 50 && test2 > 50)
	{
		printf("splnil kazdy z testu");
	}

	if (test1 > 50 || test2 > 50)
	{
		printf("splnil jeden z testu");
	}
}