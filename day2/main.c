#include <stdio.h>

int main()
{
	int znak;
	while ((znak = getchar()) != '\n' && znak != EOF)
	{
		printf("%c (kod %d)\n", znak, znak);
	}
}

