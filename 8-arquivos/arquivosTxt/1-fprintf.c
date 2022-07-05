#include <stdio.h>

int main()
{
  int num = 10;
  char palavra[10] = "palavra";

  //declaração e carregamento de arquivo
  FILE *arquivo = fopen("file.txt", "w");

  //gravando um inteiro e uma palavra no arquivo
  fprintf(arquivo, "%s - %d\n", palavra, num);

  //fechando e salvando arquivo
  fclose(arquivo);

  return 0;
}