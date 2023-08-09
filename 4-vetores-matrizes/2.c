#include <stdio.h>

int main(){

  int v[6];

  //lendo valores do vetor
  for (int i = 0; i < 6; i++)
  {
    printf("v[%d] = ", i);
    scanf("%d", &v[i]);
  }
  
  printf("\n\n");
  //imprimindo valores do vetor
  printf("Valores do vetor: ");
  for (int i = 0; i < 6; i++)
  {
    printf("%d ", v[i]);
  }

  printf("\n\n");
  
  return 0;
}