#include <stdio.h>

int main(){

  float c, p;
  //ler unidade de comprimento
  printf("Digite o valor da unidade de comprimento em centiimetros: ");
  scanf("%f", &c);

  //calcula conversao de compreimento
  p = c / 2.54;

  printf("Conversao de unidade de comprimento para centimetros: %f\n", p);

  return 0;
}