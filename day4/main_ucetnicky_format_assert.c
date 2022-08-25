#include <string.h>
#include <stdio.h>
#include <assert.h>

void UcetnickyFormat(char* buffer, char* original, int bufferLength)
{
	int originalLength = strlen(original);

	int zbytek = originalLength % 3;
	int pocetTrojic = originalLength / 3;

	assert(bufferLength > originalLength + pocetTrojic);
	
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

#define LENGTH 255

int main()
{
	char original[] = "1000000";
	char buffer[LENGTH];
	
	UcetnickyFormat(buffer, original, LENGTH);

	printf("%s\n", buffer);
}
