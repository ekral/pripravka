#include <stdio.h>

int Suma(int* cisla, int pocet)
{
	int suma = 0;
	for (int i = 0; i < pocet; i++)
	{
		suma += cisla[i];
	}

	return suma;
}

// Napiste funkci, ktera vrati minimalni hodnotu prvku v poli
int Min(int* cisla, int pocet)
{
	int min = cisla[0];

	for (int i = 1; i < pocet; i++)
	{
		int dalsi = cisla[i];

		if (dalsi < min)
		{
			min = dalsi;
		}
	}
	
	return min;
}

// Napiste funkci, ktera vrati maximalni hodnotu prvku v poli

int Max(int* cisla, int pocet)
{
	int max = cisla[0];

	for (int i = 1; i < pocet; i++)
	{
		int dalsi = cisla[i];

		if (dalsi > max)
		{
			max = dalsi;
		}
	}

	return max;
}

void Reverse(int* cisla, int pocet)
{
	for (int i = 0; i < pocet / 2; i++)
	{
		int j = pocet - i - 1;

		int tmp = cisla[i];
		cisla[i] = cisla[j];
		cisla[j] = tmp;
	}
}

int VratPocetLichych(int* cisla, int pocet)
{
	int pocetLichych = 0;

	for (int i = 0; i < pocet; i++)
	{
		int cislo = cisla[i];

		if (cislo % 2 != 0)
		{
			++pocetLichych;
		}
	}

	return pocetLichych;
}

int main()
{
	int data[] = { 2,2,2,9,9,9,9,9,3,7,7,7,7,5,5 };
	int pocetDat = sizeof(data) / sizeof(int);

	int vysledek[255] = { 0 }; // vsechny prvky budou mit hodnotu 0

	// prevedte data do jineho format, kde budou dvojice hodnot, prvni vlastni hodnota a druha pocet opakovani
	// vysledek bude mit prvky 2 3 9 5 3 1 7 4 5 2 

	int posledni = data[0];
	int pocitadlo = 0;
	int j = 0;

	for (int i = 0; i < pocetDat; i++)
	{
		int dalsi = data[i];
		if (dalsi == posledni)
		{
			++pocitadlo;
		}
		else
		{
			vysledek[j++] = posledni;
			vysledek[j++] = pocitadlo;

			posledni = dalsi;
			pocitadlo = 1;
		}
	}

	// mame zakodovane data 2 3 9 5 3 1 7 4 5 2 (2 je tam trikrat, 9 je tam petkrat, ... )
	// dedekodujte data a vypiste je na terminal
	int zakodovane[] = { 2, 3, 9, 5, 3, 1, 7, 4, 5, 2 };
	int pocetZakodovanych = sizeof(zakodovane) / sizeof(int);

	int i = 0;
	while(i < pocetZakodovanych)
	{
		int hodnota = zakodovane[i++];
		int pocetOpakovani = zakodovane[i++];

		// printf("%d x %d\n", hodnota, pocetOpakovani);

	}


	vysledek[j++] = posledni;
	vysledek[j++] = pocitadlo;

	printf("Pocet dat: %d\n", j);
	
	for (int i = 0; i < j; i++)
	{
		printf("%d ", vysledek[i]);
	}
	putchar('\n');

	int cisla[] = { 2,3,5,7,1,9,4 };
	int pocet = sizeof(cisla) / sizeof(int);

	// napiste kod, ktery prevrati poradi prvku v poli, vysledek bude  4 9 1 7 5 3 2 
	Reverse(cisla, pocet);
	
	// napiste funkci, ktera vrati pocet lichych cisel v poli
	int pocetLichych = VratPocetLichych(cisla, pocet);

	int suma = Suma(cisla, pocet);
	printf("suma: %d\n", suma);

	int min = Min(cisla, pocet);
	printf("min: %d\n", min);

	int max = Max(cisla, pocet);
	printf("max: %d\n", max);

		// vypiste na terminal prvky pole
	// 1. S pomoci cyklu for
	for (int i = 0; i < pocet; i++)
	{
		printf("%d ", cisla[i]);
	}

	putchar('\n');

	// 2. S pomoci cyklu while
	//int i = 0;
	//while (i < pocet)
	//{
	//	printf("%d ", cisla[i]);

	//	i++;
	//}

	putchar('\n');



}
