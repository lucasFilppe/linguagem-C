#include <stdio.h>
#include <math.h>

int main(){

  int num;

  printf("Digite um numero: ");
  scanf("%d", &num);

  if (num % 2 == 0)
  {
    printf(" Numero par = %d\n", num);
    
  }
  else
  {
    printf(" Numero impar = %d\n", num);
  }
  
  return 0;
}