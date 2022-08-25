#include <string.h>
#include <stdio.h>

int main()
{
	char original[] = "12000000";
	char kopie[255];

	int delka = strlen(original);

	int zbytek = delka % 3;
	int pocetTrojic = delka / 3;
	
	int i = 0;
	int j = 0;

	while (i < zbytek)
	{
		kopie[j++] = original[i++];
	}
	
	// TODO vysvetlit rozdil
	kopie[j++] = ' ';
	
	while (i < delka)
	{
		kopie[j++] = original[i++];
		kopie[j++] = original[i++];
		kopie[j++] = original[i++];
		kopie[j++] = ' ';
	}
	
	kopie[j - 1] = 0;

	printf("%s\n", kopie);
}
