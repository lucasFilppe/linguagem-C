#include <stdio.h>

int main(){

  char operacao;
  float conta, num1, num2;

  printf("Digite a operacao: ");
  scanf(" %c", &operacao);

  switch (operacao)
  {
  case '+':
    printf("Digite os dois numeros: ");
    scanf("%f %f", &num1, &num2);
    conta = num1 + num2;
    break;

  case '-':
    printf("Digite os dois numeros: ");
    scanf("%f %f", &num1, &num2);
    conta = num1 - num2;
    break;
  
  case '*':
    printf("Digite os dois numeros: ");
    scanf("%f %f", &num1, &num2);
    conta = num1 * num2;
    break;
  
  case '/':
    printf("Digite os dois numeros: ");
    scanf("%f %f", &num1, &num2);
    conta = num1 / num2;
    break;

  default:
    printf("Operador invalido\n\n");
    break;
  }

  printf("Valor da operação: %.2f\n\n", conta);
  return 0;
}