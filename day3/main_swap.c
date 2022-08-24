#include <stdio.h>
// typ ukazatel
void Swap(int* pa, int* pb) // funkce ma parametry
{
	int tmp = *pa; // operator indirekce (operator dereference)
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 3;
	int b = 2;
	int c = 1;
	
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
