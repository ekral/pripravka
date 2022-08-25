#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool UcetnickyFormat(char* buffer, char* original, int bufferLength)
{
	int originalLength = strlen(original);

	int zbytek = originalLength % 3;
	int pocetTrojic = originalLength / 3;

	if (bufferLength <= originalLength + pocetTrojic)
	{
		return false;
	}
	
	int i = 0;
	int j = 0;
	
	while (i < zbytek)
	{
		buffer[j++] = original[i++];
	}

	buffer[j++] = ' ';

	while (i < originalLength)
	{
		buffer[j++] = original[i++];
		buffer[j++] = original[i++];
		buffer[j++] = original[i++];
		buffer[j++] = ' ';
	}

	buffer[j - 1] = 0;
}

#define LENGTH 256

int main()
{
	double castka = 1000000;
	char original[LENGTH];
	char buffer[LENGTH];

	sprintf_s(original, LENGTH, "%.0lf", castka);

	if (UcetnickyFormat(buffer, original, LENGTH))
	{
		printf("%s\n", buffer);
	}
}
