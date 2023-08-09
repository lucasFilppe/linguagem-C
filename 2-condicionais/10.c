#include <stdio.h>

int main(){

  float altura, pesoHomens, pesoMulheres;
  char sexo;

  //entrada de dados
  printf("Digite a altura e o sexo da pessoa(h ou m): ");
  scanf("%f %c", &altura, &sexo);

  //se sexo for masculino
  if (sexo == 'h')
  {
    //calcule peso ideal para homens
    pesoHomens = (72.7 * altura) - 58.0;
    printf("Seu peso ideal eh %f\n", pesoHomens);
  }

  //se nao, se sexo for feminino
  else if(sexo == 'm')
  {
    pesoMulheres = (62.1 * altura) - 44.7;
    printf("Seu peso ideal eh %f\n", pesoMulheres);
  }

  //se nao
  else
  {
    printf("Sexo invalido\n");
  }
  

  

  return 0;
}