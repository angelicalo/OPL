#include <stdio.h>

int main (){
  float h, r, V;
  const float pi = 3.141592;

  scanf ("%f %f", &h, &r);

  if (h < 0 || r < 0){
      printf ("Erro\n");
    }
  else{
      V = pi * r * r * h;
      printf ("%.6f\n", V);
    }
  return 0;
}
