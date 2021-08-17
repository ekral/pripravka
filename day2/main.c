#include <stdio.h>

int main()
{
	double hmotnost = 80.0;
	double vyska = 1.86;

	char buffer[255];
	
	printf("hmotnost: ");
	fgets(buffer, 255, stdin);
	int pocetHmotnost = sscanf_s(buffer, "%lf", &hmotnost);

	printf("vyska: ");
	fgets(buffer, 255, stdin);
	int pocetVyska = sscanf_s(buffer, "%lf", &vyska);

	if (pocetHmotnost == 1 && pocetVyska == 1)
	{
		printf("hmotnost: %lf\n", hmotnost);
		printf("vyska: %lf\n", vyska);

		double bmi = hmotnost / (vyska * vyska);

		printf("bmi: %lf\n", bmi);
	}
}

