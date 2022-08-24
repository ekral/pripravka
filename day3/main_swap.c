#include <stdio.h>
// typ ukazatel
void Swap(int* pa, int* pb) // funkce ma parametry
{
	int tmp = *pa; // operator indirekce (operator dereference)
	*pa = *pb;
	*pb = tmp;
}

Vypis(int a, int b, int c)
{
	printf("Hodnoty promennych\n");
	printf("a: %d b: %d c: %d\n", a, b, c);
}

int main()
{
	int a = 3;
	int b = 2;
	int c = 1;
	
	// scanf_s("%d", &a);
	
	Vypis(a, b, c); // vypise hodnoty promennych a,b,c na terminal

	if (a > b)
	{
		Swap(&a, &b); // adresni operator (operator reference)
	}

	if (b > c)
	{
		Swap(&b, &c);
	}

	if (a > b)
	{
		Swap(&a, &b);
	}


	Vypis(a, b, c);

	return 1;
}
