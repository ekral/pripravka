#include <stdio.h>

int main()
{
	// pozor pokrocilejsi priklad
	int x = 0;
	printf("Zadej cislo: ");
	int pocet = scanf_s("%d", &x);
	int znak = getchar();
	printf("zadal jsi: %d", x);
}
