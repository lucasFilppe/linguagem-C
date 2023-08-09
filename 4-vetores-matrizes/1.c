#include <stdio.h>

int main(){

  int A[6] = {0, 1, 5, -2 , -5, 7};

  int aux = A[0] + A[1] + A[5];
  printf("Soma dos indices A[0] + A[1] + A[5] do vetor = %d\n", aux);

  A[4] = 100;

  //mostrando vetor na tela
  printf("Imprimindo vetor: ");
  for ( int i = 0; i < 6; i++)
  {
    printf("%d ", A[i]);
  }
  printf("\n\n");
  
  return 0;
}