#include <stdio.h>

int main (){
  float C, L, P, valor_total;

  scanf ("%f %f %f", &C, &L, &P);

  valor_total = 2 * 5 * (C + L) * P;

  printf ("%.2f", valor_total);

  return 0;
}
