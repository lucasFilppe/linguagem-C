#include <stdio.h>


int main(){

  //ler quatro notas
  float nota1, nota2, nota3, nota4, media;

  printf("Digite os valores das 4 notas: ");
  scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
 
  //calcular media artimetica
  media = (nota1 + nota2 + nota3 + nota4) / 4;

  //imprime saida
  printf("Media: %f\n", media);
  return 0;
}