#include <stdio.h>
#include <limits.h>

int main()
{
	int x = 0;
	int pocetBytuPromenne = sizeof(x);
	int pocetbytuTypu = sizeof(int);
	
	printf("promenna x je ulozena na adrese %p\n", &x);
	printf("promenna x v pameti zabere %d byty\n", sizeof(x));
	printf("promenna x ma hodnotu %d\n", x);
	
}
