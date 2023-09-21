#include <stdio.h>

int main(){

  float real, cotacaoDolar;
  //entrada de valor em real
  printf("Digite o valor em real: R$ ");
  scanf("%f", &real);

  //calcula valor de cotação do dólar
  cotacaoDolar = real / 4.98;

  //saida de valor em dolar
  printf("Valo correspondente em dólar R$ %.2f\n", cotacaoDolar);
  return 0;
}