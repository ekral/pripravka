#include <stdio.h>

int main()
{
	double vyska = 1.8;
	double hmotnost = 55;

	double bmi = hmotnost / (vyska * vyska);

	// pokud bude bmi vetsi nez 25
	// tak vypiste text "sleva na doplnek na hubnuti"
	// kdyz bude bmi mensi nez 18.5 
	// tak vypiste text "sleva na doplnek na nabrani vahy"
	if (bmi > 25)
	{
		printf("sleva na doplnek na hubnuti\n");
	}
	else if (bmi < 18.5)
	{
		printf("sleva na doplnek na nabrani vahy\n");
	}

	// bez pouziti operatoru && vypiste nazvy kategorii
	// (0, 16.5> tezka podvyziva
	// (16.5, 18.5> podvaha
	// (18.5, 25> idealni vaha
	// (25.0, 30.0> nadvaha

	char* text = NULL;

	if (bmi <= 16.5)
	{
		text = "tezka podvyziva";
	}
	else if (bmi <= 18.5)
	{
		text = "podvaha";
	}
	else if (bmi <= 25)
	{
		text = "idealni vaha";
	}
	else 
	{
		text = "nadvaha a vys";
	}

	printf(text);

	return 1;
}
