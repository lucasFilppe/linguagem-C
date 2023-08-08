#include <stdio.h>

int main(){

  int n1, n2, n3;

  printf("Digite um numero: ");
  scanf("%d %d %d", &n1, &n2, &n3);

  int soma = n1 + n2 + n3;

  printf("%d\n", soma);
  return 0;
}