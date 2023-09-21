#include <stdio.h>

int main(){

  //declarando variavel
  int num, antecessor, sucessor;

  //entrada de dados
  printf("Digite o numero: ");
  scanf("%d", &num);

  antecessor = num - 1;
  sucessor = num + 1;

  printf("Antecessor %d\n", antecessor);
  printf("sucessor %d\n", sucessor);
  return 0;
}