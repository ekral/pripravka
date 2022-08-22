## Teorie
  
- Proměnná je pojmenovaná hodnota v paměti RAM.
- Paměť pro lokalní proměnnou přiřazuje runtime jazyka C automaticky.
- Adresu promeěnné získame pomocí operátoru ```&```, například ```&datum```.
- Kolik bytu zabere proměnná v paměti zjistíme pomocí klíčového slova ```sizeof```, například ```sizeof(datum)```.

## Ukol

Vypište na terminál, kolik let má student s datem narození v proměnné ```datum```.

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
### Řešení

```c 
#include <stdio.h>

int main() 
{
	int datum = 2002;
	int aktualni = 2022;
	int vek = aktualni - datum;

	printf("Vek %d\n", vek);

	return 1;
}
```
