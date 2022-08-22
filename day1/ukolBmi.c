#include <stdio.h>

int main() 
{
	// vyska
	// hmotnost
	int hmotnost = 80;
	double vyska = 1.85;

	// druha mocna
	double druhaMocnina = vyska * vyska;

	// spocitejte a vypiste hodnotu bmi indexu
	double bmi = hmotnost / druhaMocnina;

	printf("bmi: %lf\n", bmi);

	return 1;
}
