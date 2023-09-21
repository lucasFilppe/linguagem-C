#include <stdio.h>

int main(){

  float c,k;

  //ler temperatura
  printf("Digite a temperatura em celsius: ");
  scanf("%f", &c);

  //converte para kelvin
  k = c + 273.15;

  //saida
  printf("temperatura convertida para Kelvin: %.2f\n", k);
  return 0;
}