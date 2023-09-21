#include <stdio.h>

int main(){

  int num, raiz;

  printf("Digite dois numeros: ");
  scanf("%d", &num);

  raiz = num * num;

  if(num < 0){
    printf("Nao existe raiz negativa\n");
  }
  

  printf("Raiz quadarada %d\n", raiz);
  return 0;
}