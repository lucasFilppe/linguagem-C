#include <stdio.h>

int main(){

  float km, m;

  //ler velocidade
  printf("Digite a velocidade em metros por segundo: ");
  scanf("%f", &m);

  //conversao de velocidade
  km = m * 3.6;

  //saida
  printf("Velocidade convertida em km(por hora): %f\n", km);
  return 0;
}