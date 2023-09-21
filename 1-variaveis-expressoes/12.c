#include <stdio.h>

int main(){

  float m, k;

  printf("Digite a distancia em milhas: ");
  scanf("%f", &m);

  k = 1.61 * m;

  printf("Distancia convertida em quilometros:  %f\n", k);
  return 0;
}