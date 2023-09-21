#include <stdio.h>

int main(){

  float km, m;

  //ler velocidade
  printf("Digite a velocidade em km(por hora): ");
  scanf("%f", &km);

  //conversao de velocidade
  m = km / 3.6;

  //saida
  printf("Velocidade convertida em metros por segundo: %f\n", m);
  return 0;
}