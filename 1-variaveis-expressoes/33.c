#include <stdio.h>

int main(){

  float lado, area;

  //entrada de dados
  printf("Digite o tamanho do lado de um quadrado: ");
  scanf("%f", &lado);

  //clacula a area do quadrado
  area = lado * lado;

  printf("Area do quadrado %fcm\n", area);
  return 0;
}