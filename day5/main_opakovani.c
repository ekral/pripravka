#include <stdio.h>

int main()
{
	int i = 100;
	while (i >= 50)
	{
		printf("%d ", i);
		i -= 10;
	}
	
	putchar('\n');

	for (int i = 100; i >= 50; i -= 10)
	{
		printf("%d ", i);
	}

	// 1. Vypiste na konzoli: 100 90 80 70 60 50 
	// 1a) S pomoci cyklu while
	// 1b) S pomoci cyklu for

}
