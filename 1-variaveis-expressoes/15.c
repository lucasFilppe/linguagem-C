#include <stdio.h>
#define PI 3.12

int main(){

  float r,g;
  //ler unidade do angulo
  printf("Digite um angulo em radianos: ");
  scanf("%f", &r);

  //calcula conversao
  g = r * 180 / PI;

  //imprime saida
  printf("CONVERSAO DE radiano PARA graus: %.2f\n", g);
  return 0;
}