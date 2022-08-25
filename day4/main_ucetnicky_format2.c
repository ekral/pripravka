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

	char retezec[] = "1000000";
	
	int mojeDelka = DelkaRetezce(retezec);

	// knihovni funkce ze string.h
	int delka = strlen(retezec);
	
	printf("delka: %d\n", delka);

	for (int i = 0; i < delka; i++)
	{
		putchar(retezec[i]);
	}

}
