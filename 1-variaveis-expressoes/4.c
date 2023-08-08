#include <stdio.h>

int main(){

  double num;

  printf("Digite um numero: ");
  scanf("%lf", &num);

  double quadrado = num * num;

  printf("%lf\n", quadrado);
  return 0;
}