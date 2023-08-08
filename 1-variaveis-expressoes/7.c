#include <stdio.h>


int main(){
 
  float f;
  
  //ler temperatura em Celsius
  printf("Digite a temperatura em Celsius: ");
  scanf("%f", &f);

  float c = 5.0 * (f - 32) / 9.0;

  printf("Tempretura em farenheit: %f\n", c);
  return 0;

}