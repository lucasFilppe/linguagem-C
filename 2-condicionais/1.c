#include <stdio.h>

int main(){

  int num1, num2, maior;

  printf("Digite dois numeros: ");
  scanf("%d %d", &num1, &num2);

  maior = num1;

  if(num2 > num1 ){
    maior = num2;
  }

  printf("O maio eh %d\n", maior);
  return 0;
}