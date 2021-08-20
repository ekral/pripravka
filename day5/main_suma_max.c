#include <stdio.h>
#include <string.h>

void funkce(int pole[])
{
	// nebude fungovat uvnitr funkce
	int n = sizeof(pole);
	printf("funkce: %d\n", n);
}

int main()
{
	int pole[] = { 7, 8, 9, 5, 6, 4 };


	funkce(pole);

	int n = sizeof(pole) / sizeof(int); // pouze tam kde je pole definovane
	printf("main: %d\n", n);
	
	//1. Sectete vsechny prvky v poli
	int suma = 0;
	for (int i = 0; i < n; i++)
	{
		int prvek = pole[i];
		suma += prvek;
	}

	printf("%d\n", suma);

	//2. Najdete hodnotu nejvetsi prvku v poli
	int max = pole[0];

	for (int i = 1; i < n; i++)
	{
		int dalsi = pole[i];

		if (dalsi > max)
		{
			max = dalsi;
		}
	}

	printf("%d\n", max);

}
