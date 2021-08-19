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
}
