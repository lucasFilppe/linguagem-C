#include <stdio.h>

int main(){

  //declarando variavel
  int num, antecessor, sucessor;

  //entrada de dados
  printf("Digite o numero: ");
  scanf("%d", &num);

  antecessor = num - 1;
  sucessor = num + 1;

  //logica da soma entre triplo do sucessor do numero digitado e o dobro do seu antecessor
  int soma = (sucessor * sucessor * sucessor ) +  (antecessor * antecessor);

  printf("Antecessor %d\n", antecessor);
  printf("sucessor %d\n", sucessor);

  printf(" soma entre triplo do sucessor do numero digitado e o dobro do seu antecessor: %d\n", soma);
  return 0;
}