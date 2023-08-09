#include <stdio.h>

int main(){

  int num;

  //entrada de dados
  printf("Digite o numero inteiro: ");
  scanf("%d", &num);

  //verificando dia
  switch (num)
  {
  case 1:
    printf("Domingo\n");
    break;

  case 2:
    printf("segunda\n");
    break;
  
  case 3:
    printf("Terça\n");
    break;

  case 4:
    printf("quarta\n");
    break;
 

  case 5:
    printf("quinta\n");
    break;

  case 6:
    printf("sexta\n");
    break;
  
  case 7:
    printf("sabado\n");
    break;
 
  default:
    printf("Data invalida\n\n");
    break;
  }

  return 0;
}