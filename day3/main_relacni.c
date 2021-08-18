#include <stdio.h>
#include <math.h>

int main()
{
	int body = 75;
	// student musel splnit test za vice nez 50 bodu

	int vysledek = body > 50;
	printf("%d\n", vysledek);

	int hotovost = 22;
	int cenaCocaColy = 22;

	printf("%d\n", hotovost == cenaCocaColy);
	printf("%d\n", hotovost != cenaCocaColy);
	printf("%d\n", hotovost < cenaCocaColy);
	printf("%d\n", hotovost > cenaCocaColy);
	printf("%d\n", hotovost <= cenaCocaColy);
	printf("%d\n", hotovost >= cenaCocaColy);
}
