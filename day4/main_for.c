#include <stdio.h>
#include <math.h>


int main()
{
	//i = i + 2;
	//i += 2; // zkratka pro predchazejici vyraz
	//++i; // inkrementace

	// 1. pomoci cyklu while vypiste na terminal: 0 1 2 3 4 5 6 7 8 9

	int i = 0;
	while (i < 10)
	{
		printf("%d ", i);
		++i;
	}

	putchar('\n');

	// 2. pomoci cyklu for vypiste na terminal:  0 1 2 3 4 5 6 7 8 9

	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", i);
	}

	putchar('\n');

	// pomoci cyklu for vypiste na terminal: 2 4 6 8 10 12 14 16 

	for (int i = 2; i <= 16; i += 2)
	{
		printf("%d ", i);
	}

	putchar('\n');

	int x = 2;
	for (int i = 0; i < 8; ++i)
	{
		printf("%d ", x);
		x += 2;
	}

	putchar('\n');

	// pomoci cyklu for vypiste na terminal: 1 2 4 8 16 32 64 128 

	for (int i = 1; i <= 128; i *= 2)
	{
		printf("%d ", i);
	}

	putchar('\n');

	int y = 1;
	for (int i = 0; i < 8; i++)
	{
		printf("%d ", y);
		y *= 2;
	}
}
