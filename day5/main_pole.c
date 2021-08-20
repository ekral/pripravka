#include <stdio.h>
#include <string.h>

int main()
{

	int pole[3];
	
	pole[0] = 1;
	pole[1] = 2;
	pole[2] = 3;

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", pole[i]);
	}

	int kopie[3];
	
	// muzu i kopirovat primo pamet, ale je potreba byt opatrny
	//memcpy_s(kopie, 3 * sizeof(int), pole, 3 * sizeof(int));

	for (int i = 0; i < 3; i++)
	{
		kopie[i] = pole[i];
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", pole[i]);
	}
}
