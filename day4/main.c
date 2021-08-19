#include <stdio.h>
#include <math.h>


int main()
{
	char znak;
	while ((znak = getchar()) != 'q')
	{
		printf("kod znaku: %c %d\n", znak, znak);
	}

	do
	{
		znak = getchar();
		printf("kod znaku: %c %d\n", znak, znak);

	} while (znak != 'q');

	// pomoci cyklu while vypiste na terminal: 1 2 3 4 5 6 7 8 9
	int i = 0;
	//i = i + 2;
	//i += 2; // zkratka pro predchazejici vyraz
	//++i; // inkrementace

	while (i < 10)
	{
		printf("%d ", i);
		++i;
	}

	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", i);
	}

	// pomoci cyklu for vypiste na terminal: 2 4 6 8 10 12 14 16 
	for (int i = 2; i <= 16; i += 2)
	{
		printf("%d ", i);
	}
	// pomoci cyklu for vypiste na terminal: 1 2 4 8 16 32 64 128 
}