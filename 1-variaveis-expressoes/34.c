#include <stdio.h>
#define pi 3.14
int main(){

  float areaCirculo, raio;
  //ler raio
  printf("Digite o raio: ");
  scanf("%f", &raio);

  //calcula area de um circulo
  areaCirculo = pi * (raio * raio);

  //imprime saida
  printf("Area do circulo: %f\n", areaCirculo);
  return 0;
}