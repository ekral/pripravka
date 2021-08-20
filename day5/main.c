#include <stdio.h>

int main()
{
	// Inflace je 3%, vypiste realnou mzdu na dalsich 5 let,
	// pokud nominalne budete brat porad 30000

	double prijem = 30000;
	double urok = 3.0;

	double realnyPrijem = prijem;

	for (int i = 0; i < 5; i++)
	{
		realnyPrijem *= (100.0 / (100.0 + urok));
		printf("%.2lf\n", realnyPrijem);
	}
}