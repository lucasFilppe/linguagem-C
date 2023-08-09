#include <stdio.h>

int main(){

  int num;
  int count = 0;
  int countPar = 0;

  do
  {
    //le numero
    printf("Digite o numero: ");
    scanf("%d", &num);
     
    //se numero tiver resto igual a zero
    if (num % 2 == 0)
    {
      countPar++;
    }
    
    count++;

  } while (num != 1000);//enquanto numero for diferente de 1000, faça a repetição

  //saida
  printf("Numero de valores pares digitados %d\n", countPar);  
  printf("Numero de valores digitados %d\n", count);  
  return 0;
}