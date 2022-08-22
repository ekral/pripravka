#include <stdio.h>
#include <time.h>

int main() 
{
	struct tm tm;
	time_t t = time(NULL);
	localtime_s(&tm, &t);

	int rok = tm.tm_year + 1900;
	int mesic = tm.tm_mon + 1;
	int den = tm.tm_mday;

	printf("Aktualni rok: %d\n", rok);
	printf("Aktualni rok: %d\n", mesic);
	printf("Aktualni rok: %d\n", den);

	int narozeniRok = 2002;
	int narozeniMesic = 8;
	int narozeniDen = 22;

	// TODO urcit vek, kdyz zname rok, mesic a den narozeni, bez pouziti funkce

	return 1;
}
