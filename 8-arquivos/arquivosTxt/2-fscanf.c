#include <stdio.h>

int main()
{

  //declarando variaveis
  int inteiro;
  char palavra;

  //carregando e abrindo arquivo
  FILE *arq = fopen("file.txt", "r");

  //le arquivo texto
  fscanf(arq, "%c %d\n", &palavra, &inteiro);

  fclose(arq);

  printf("%c %d\n", palavra, inteiro);
  return 0;
}