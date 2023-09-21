#include <stdio.h>

int main(){

  //ler tres valores
  float a,b,c, somaQuadrados;

  printf("digite tres valores: ");
  scanf("%f %f %f", &a, &b, &c);

  //calcular a soma dos quadrados dos numeros lidos
  somaQuadrados = (a * a) + (b * b) + (c *c);

  //imprimir saida

  printf("A soma dos quadrados dos nnumeros digitados eh %f\n", somaQuadrados);
  return 0;
}