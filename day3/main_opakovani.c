#include <stdio.h>

int main()
{
	int a = 5;
	int b = 6;

	double c = 1.0 / 2.0;
	printf("%lf", c);

	int x = 0;
	char buffer[255];
	char* ok = fgets(buffer, 255, stdin);
	if (!ok)
	{
		printf("chyba pri cteni z konzole");
		return -1;
	}

	int pocet = sscanf_s(buffer, "%d", &x);
	if (!pocet)
	{
		printf("chyba pri prevodu na int");
		return -1;
	}
	
	printf("%d", x);
}
