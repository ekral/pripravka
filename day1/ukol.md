## Teorie
  
- promenna je pojmenovana hodnota v pameti RAM
- pamet pro lokalni promennou prirazuje runtime jazyka C automaticky
- adresu promenne ziskame pomoci operatoru &, napriklad &datum
- kolik bytu zabere promenna v pameti ziskame pomoci klicoveho slova sizeof, napriklad sizeof(datum)

## Ukol

Vypiste na terminal, kolik let ma student s datum narozeni v promenne datum

---

```c 
#include <stdio.h>

int main() 
{

	int datum = 2002;

	int n1 = sizeof(datum); // kolik bytu zabere promenna datum
	int n2 = sizeof(int); // kolik bytu zabere typ int
	
	printf("Promenna datum ma hodnotu %d\n", datum);
	printf("Promenna datum zabere v pameti %d byty\n", sizeof(datum));
	printf("Promenna datum je ulozena v RAM na adrese %p\n", &datum);
	
	// vypiste na terminal, kolik let ma student s datum narozeni v promenne datum
	int x = 3;
	int y = 2;
	int rozdil = x - y;

	int aktualni = 2022;

	return 1;
}
```
