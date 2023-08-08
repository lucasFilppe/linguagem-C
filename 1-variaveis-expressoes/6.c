#include <stdio.h>


int main(){
 
  float c;
  
  //ler temperatura em Celsius
  printf("Digite a temperatura em Celsius: ");
  scanf("%f", &c);

  float f = c * (9.0 / 5.0) + 32;

  printf("Tempretura em farenheit: %f\n", f);
  return 0;
}