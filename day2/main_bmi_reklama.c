#include <stdio.h>

int main()
{
	double vyska = 1.8;
	double hmotnost = 75;

	double bmi = hmotnost / (vyska * vyska);

	// pokud bude bmi vetsi nez 25
	// tak vypiste text "sleva na doplnek na hubnuti"

  // priklady
	int body = 60;            // = je operator prirazeni
	int rovno = body == 60;   // == operator rovnosti
	int nerovno = body != 60; // != nerovnost
	int vetsi = body > 0;
	int mensi = body < 100;
	int mensiRovno = body <= 100;
	int vetsiRovno = body >= 100;

	if (body > 50) printf("Splnil podminky.");

	return 1;
}
