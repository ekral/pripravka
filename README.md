# Programátorská přípravka 2021

## 1. Úvod, co je to proměnná, typ int a jeho výpis na konzoli
Tento [soubor main.c](/day1/main.c) obsahuje ukázku základní práce s proměnou.
- Proměnná je pojmenovaná hodnota v paměti, kdy její typ určuje délku a množinu operací které s ním můžeme provádět
```c
int x = 0;
```

- Adresu proměnné získáme pomocí operátoru **&**
```c
&x
```
- Délku proměnné nebo typu získáme pomocí operátru **sizeof**
```c
sizeof(x)
sizeof(int)
```
- pomocí funkce printf můžeme vypsat text na terminál, tato funkce je deklarovaná v hlavičkovém souboru stdio.h, pro výpis hodnoty typu int používáme formátovací značku **%d**
```c
printf("promenna x ma hodnotu %d\n", x);
```
- pro výpis adresy používám formátovací značku **%p**
```c
printf("promenna x je ulozena na adrese %p\n", &x);
```
## 2. Vstup z konzole, operátor přiřazení, aritmetické operátory, typ double
- Operátor přiřazení vloží hodnotu do paměti na adresu proměnné. Pozor, neplést s relační operátorem rovnosti **==**
```c
int x;
x = 3;
```
- Operátor přiřazení přiřadí proměnné hodnotu a my pak získáme tuto hodnotu
```c
int x;
printf("%d", x = 2);
```
- Využíváme toho například při přiřazení stejné hodnoty více proměnným
```c
int a;
int b;

a = b = 1;
```
- Nebo v cyklu při čtení z konzole. Kompletní příklad najdete v souboru [main_papousek.c](/day2/main_papousek.c).
```c
int znak;
while ((znak = getchar()) != EOF)
{
	printf("%c (kod %d)\n", znak, znak);
}
```
- Funkce **fscanf** je velmi složitá na použití, například v input bufferu nám zůstává znak '\n' a pokud se konverze nepovede tak se nevyprázdní buffer. Problém je pospsaný podrobněji například [zde](http://c-faq.com/stdio/getsvsfgets.html).
- Vhodnější je použít například funkci [sscanf_s](https://en.cppreference.com/w/c/io/fscanf).  Kompletní příklad najdete v souboru [main_input.c](/day2/main_input.c).
  - Nejprve si rezervujeme paměť (pole buffer) do které chceme načíst zadaný řádek na konzoli. 
	```c
	char buffer[255];
	```
  - Poté pomocí fukce [fgets](https://en.cppreference.com/w/c/io/fgets) načteme znaky z konzole a uložíme je do pole *buffer*. Funkce načte maximálně 255 znaků a máte tedy jistotu že se všechny znaky vejdou do našeho pole.
	```c
	fgets(buffer, 255, stdin);
	```
  - Poté pomocí fukce [sscanf_s](https://en.cppreference.com/w/c/io/fscanf) převedeme řetězec v poli *buffer* na celé číslo. Pokud se převod nezdaří, tak funkce vrátí hodnotu *0*, jinak vratí počet převedených argumentů, v naše případě hodnotu *1*.
	```c
	int pocet = sscanf_s(buffer, "%d", &x);
	```
- Formátovací značka pro fukce [printf](https://en.cppreference.com/w/c/io/fprintf) a [sscanf_s](https://en.cppreference.com/w/c/io/fscanf) pro typ double je **%lf**
```c
int pocetHmotnost = sscanf_s(buffer, "%lf", &hmotnost);
printf("hmotnost: %lf\n", hmotnost);
```
- Numerická konstanta, například 1 je typu int a 1.0 je typu double, pozor při dělení. Výsledek následující operace bude *0* protože numerické konstany 1 a 2 ve výrazu ```1 / 2``` jsou typu *int*. 
```c
double vysledek = 1 / 2;
``` 
- Pokud chceme mít výsledek 0.5, tak musí alespoň jedna numerická konstanta typu double.
```c
double vysledek = 1.0 / 2.0;
``` 
- Ve zdrojovém terminálu se používá desetinná tečka. Při zadávání hodnoti na konzoli záleží na tom v jakém jazykovém prostředí se používá.

### Úkol - vypočtěte hodnotu BMI. Řešení najdete v souboru [main_bmi.c](/day2/main_bmi.c)

## 3. Aritmetické operace

### 1. Úkol - vypočtěte obvod a obsah ([Heronův vzorec](https://cs.wikipedia.org/wiki/Heron%C5%AFv_vzorec)) trojúhelníka . Řešení najdete v souboru [main_bmi.c](/day3/main_trojuhlenik.c)
  - Mocninu spočítáme pomocí funkce *sqrt* z knihovny *math.h*
```c
#include <math.h>

int main()
{
	double odmocnina = sqrt(9.0);
}
``` 
### 2. Úkol - vypočtěte výši splátky hypotéky dle [vzorce](http://www.aristoteles.cz/matematika/financni_matematika/hypoteka-vypocet.php). 
  - Pokud máme roční úrokovou míru *3%*, tak *i = 3% / 100 / 12 = 0,0025*, podělíme tedy 100 abychom z procent získali desetinné číslo a podělíme *12*, protože máme *12* splátek za rok.
  - počet splátek představuje počet měsíčních splátek, tedy *n = 30 let * 12 měsíců = 360* 
  - Mocninu spočítáme pomocí funkce *pow* z knihovny *math.h*
```c
#include <math.h>

int main()
{
	double mocnina = pow(2.0, 8.0);
}
``` 
