#include <stdio.h>

int main(){

  float c,k;

  //ler temperatura
  printf("Digite a temperatura em kelvin: ");
  scanf("%f", &k);

  //converte para kelvin
  c = k - 273.15;

  //saida
  printf("temperatura convertida para Celsius: %.2f\n", c);
  return 0;
}