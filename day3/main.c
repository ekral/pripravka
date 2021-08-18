#include <stdio.h>
#include <math.h>

int main()
{
	double a = 3;
	double b = 4;
	double c = 5; // c je prepona

	if (a + b > c)
	{
		printf("Je to trojuhelnik\n");

		// vypiste 1 pokud je trojuhelnik pravouhly, jinak 0
		int vysledek = (c * c) == (a * a) + (b * b);

		// cokoliv co neni 0 je pravda
		if (vysledek)
		{
			printf("trojuhelnik je pravouhly\n");
		}
		else
		{
			printf("trojuhelnik neni pravouhly\n");
		}
	}
	else
	{
		printf("neni trojuhelnik");
	}
}