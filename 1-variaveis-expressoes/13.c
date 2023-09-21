#include <stdio.h>

int main(){

  float m, k;

  printf("Digite a distancia em quilometros: ");
  scanf("%f", &k);

  m = k / 1.61;

  printf("Distancia convertida em milhas:  %f\n", m);
  return 0;
}