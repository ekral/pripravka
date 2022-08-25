#include <string.h>
#include <stdio.h>

int DelkaRetezce(char* retezec)
{
	// TODO spocitejte delku rezce
	int i = 0;

	while (retezec[i] != 0)
	{
		++i;
	} 

	return i;
}

int main()
{
	// cislo je delitelne beze zbytku 3
	int zbytek = 9 % 3;

	char original[] = "100500200";
	
	int mojeDelka = DelkaRetezce(original);

	// knihovni funkce ze string.h
	int delka = strlen(original);
	
	printf("delka: %d\n", delka);

	char kopie[255];
	int j = 0;

	for (int i = 0; i < delka; i++)
	{
		int index = delka - i - 1;
		
		kopie[j] = original[i];
		++j;

		if (index % 3 == 0)
		{
			kopie[j] = ' ';
			++j;
		}
	}

	kopie[j] = 0;

	printf("%s\n", kopie);
}
