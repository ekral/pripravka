#include <stdio.h>
#include <string.h>

int main()
{
	int poleA[] = { 7, 8, 9, 5, 6, 4 };
	int poleB[] = { 7, 8, 9, 5, 6, 4 };

	// vypiste, zda maji obe pole stejne prvky
	int nA = sizeof(poleA) / sizeof(int); // pouze tam kde je pole definovane
	printf("pocet prvkuA: %d\n", nA);

	int nB = sizeof(poleA) / sizeof(int); // pouze tam kde je pole definovane
	printf("pocet prvkuB: %d\n", nB);
	
	int jsouStejne = 1;

	if (nA == nB)
	{
		for (int i = 0; i < nA; i++)
		{
			int prvekA = poleA[i];
			int prvekB = poleB[i];

			// Nastavit jsouStejne na 0 a provest prikaz break, pokud nejsou prvky stejne
			if (prvekA != prvekB)
			{
				jsouStejne = 0;
				break; // ukonci cyklu
			}
		}
	}
	else
	{
		jsouStejne = 0;
	}

	printf("je pole stejne: %d\n", jsouStejne);

	if (jsouStejne)
	{
		printf("jsou stejne");
	}
}
