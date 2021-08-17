#include <stdio.h>

int main()
{
	int x = 0;
	
	// Reseni s fgets a sscanf_s
	// Why does everyone say not to use gets()?
	// http://c-faq.com/stdio/getsvsfgets.html
	char buffer[255];
	fgets(buffer, 255, stdin);
	int pocet = sscanf_s(buffer, "%d", &x);

	// Reseni s scanf_s
	// Why does everyone say not to use scanf?
	// http://c-faq.com/stdio/scanfprobs.html
	//int pocet = scanf_s("%d", &x);

	if (pocet == 1)
	{
		printf("Pocet uspesne prevedenych znacek %d\n", pocet);
		printf("Zadal jsi cislo %d\n", x);
	}
	
	int znak;
	while ((znak = getchar()) != '\n' && znak != EOF)
	{
		printf("%c (kod %d)\n", znak, znak);
	}
	
}

