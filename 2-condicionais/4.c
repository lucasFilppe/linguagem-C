#include <stdio.h>
#include <math.h>

int main(){

  double num;

  printf("Digite um numero: ");
  scanf("%lf", &num);

  if (num >= 0)
  {
    printf(" Raiz Quadrada = %lf\n", sqrt(num));
    printf("Quadrado = %lf\n", pow(num, 2));
  }
  else
  {
    printf("Numero invalido\n");
  }
  
  return 0;
}