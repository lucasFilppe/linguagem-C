#include <stdio.h>
#define PI 3.12

int main(){

  float r,g;
  //ler unidade do angulo
  printf("Digite um angulo em graus: ");
  scanf("%f", &g);

  //calcula conversao
  r = g * PI / 180;

  //imprime saida
  printf("CONVERSAO DE GRAUS PARA radiano: %.2f\n", r);
  return 0;
}