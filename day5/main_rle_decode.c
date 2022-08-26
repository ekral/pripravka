#include <stdio.h>

int main()
{
	// mame zakodovane data 2 3 9 5 3 1 7 4 5 2 (2 je tam trikrat, 9 je tam petkrat, ... )
	// dekodujte data a vypiste je na terminal

	int zakodovane[] = { 2, 3, 9, 5, 3, 1, 7, 4, 5, 2 };
	int pocetZakodovanych = sizeof(zakodovane) / sizeof(int);

	int i = 0;
	while(i < pocetZakodovanych)
	{
		int hodnota = zakodovane[i++];
		int pocetOpakovani = zakodovane[i++];

		for (int j = 0; j < pocetOpakovani; j++)
		{
			printf("%d ", hodnota);
		}
	}

	putchar('\n');
}
