//Programa que conta o numero de espaçoes em um arquivo texto
#include <stdio.h>

int main(int argc, char **argv)
{

  int nEspacos = 0;
  char c;
  FILE *arq;

  arq = fopen(argv[1], "r"); //argv[1] é o primeiro argumento

  //enquanto nao for final de arquivo
  while (!feof(arq))
  {
    c = fgetc(arq); //le um caractere e retorna como inteiro

    //se C for igual a espaço vazio incrementa nEspaços
    if (c == ' ')
    {
      nEspacos++;
    }
  }
  fclose(arq);

  printf("O arquivo tem %d espaços\n", nEspacos);

  return 0;
}