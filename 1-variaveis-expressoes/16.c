#include <stdio.h>

int main(){

  float c, p;
  //ler unidade de comprimento
  printf("Digite o valor da unidade de comprimento em polegadas: ");
  scanf("%f", &p);

  //calcula conversao de compreimento
  c = p * 2.54;

  printf("Conversao de unidade de comprimento para centimetros: %f\n", c);

  return 0;
}