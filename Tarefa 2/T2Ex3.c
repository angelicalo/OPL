#include <stdio.h>

int main (){
  int n_dias;
  float pagamento;
  const float valor_diaria = 30.00;

  scanf ("%i", &n_dias);

  pagamento = (1 - 7.5 / 100) * n_dias * valor_diaria;

  printf ("%.2f", pagamento);

  return 0;
}
