#include <string.h>
#include <stdio.h>

int main()
{
	char vysledek[255];
	
	char* retezec = "1000000"; // "1 000 000"

	vysledek[0] = 'a';
	
	char* p = retezec;
	while (*p)
	{
		putchar(*p);
		++p;
	}

	int i = 0;
	while (retezec[i] != 0)
	{
		putchar(retezec[i]);
		++i; // zvysi hodnotu i o 1
	}

	int j = 0;
	int delka = strlen(retezec);
	while (j < delka)
	{
		char znak = retezec[j];
		putchar(znak);
		++j;
	}

	int zbytek1 = 10 % 3; // 10 - (3 * 3) = 1
	int zbytek2 = 11 % 3; // 11 - (3 * 3) = 2
	int zbytek3 = 0 % 3; // 0 - (0 * 3) = 0
	int zbytek4 = 8 % 2; // 8 - (4 * 2) = 0
}
