# Programátorská přípravka 2021

## 1. Úvod, co je to proměnná, typ int a jeho výpis na konzoli
Tento [soubor main.c](/day1/main.c) obsahuje ukázku základy práce s proměnou.
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
- Nebo v cyklu při čtení z konozle, kompletní příklad najdete v souboru [soubor main.c](/day1/main_papousek.c)
```c
int znak;
while ((znak = getchar()) != EOF)
{
	printf("%c (kod %d)\n", znak, znak);
}
```
- Proč nepoužívat fscanf - v input bufferu nám zůstává znak '\n' a pokud se konverze nepovede tak se nevyprázdní buffer. Vhodnější je použít například funkci sscanf_s. 
  - Nejprve si rezervujeme paměť (pole buffer) do které chceme načíst zadaný řádek na konzoli.
  ```c
  char buffer[255];
  ```
  - Poté pomocí fukce [sscanf_s](https://en.cppreference.com/w/c/io/fscanf) načteme znaky z konzole a uložíme je do pole buffer. Funkce načte maximálně 255 znaků a máte tedy jistotu že se všechny znaky vejdou do našeho pole.
  ```c
  fgets(buffer, 255, stdin);
  ```
  - Nakonec 
- Formátovací značka pro double je %lf
- Numerická konstanta, například 1 je typu int a 1.0 je typu double, pozor při dělení.
- Ve zdrojovém terminálu se používá desetinná tečka. Při zadávání hodnoti na konzoli záleží na tom v jakém jazykovém prostředí se používá.

Úkol - vypočtěte hodnotu BMI [řešení](/day2/main_bmi.c)
