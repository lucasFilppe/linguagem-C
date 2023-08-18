#include <stdio.h>

int main(){

  //declara vetores
  int array[10], arrayQuadrado[10];

  //loop para ler um conjunto de numeros reais
  for (int i = 0; i < 10; i++)
  {
    printf("Vetor[%d] = ", i);
    scanf("%d", &array[i]);
  }
  printf("\n\n");

  //loop para armazenar quadrado dos numeros digitados em outro vetor
  for (int i = 0; i < 10; i++)
  {
    arrayQuadrado[i] = array[i] * array[i];  
  }

  //imprime vetores
  for (int i = 0; i < 10; i++)
  {
    printf("vetor[%d] ao quadrado = %d\n", i, arrayQuadrado[i]);
  }
  printf("\n\n");

}