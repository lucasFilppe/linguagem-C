//copia arquivo texto em outro arquivo texto removendo os espaçoes
#include <stdio.h>

int main(int argc, char **argv)
{
  char c;
  FILE *entrada, *saida;

  entrada = fopen(argv[1], "r"); //primeiro argumento
  saida = fopen(argv[2], "w");   //segundo argumento

  //enquanto nao for final de arquivo
  while (fscanf(entrada, "%c", &c) != EOF)
  {
    if (c != ' ')
    {
      fprintf(saida, "%c", c);
    }
  }

  fclose(entrada);
  fclose(saida);
  return 0;
}