#include <stdio.h>
#include <stdlib.h>

int main()
{
  char* text = "2.1";
  char* position = NULL;
  double x = strtod(text, &position);
  int index = position - text;
}
