//criar uma função que le uma matriz de inteiros de um arquivo texto e imprime na saida
#include <stdio.h>

void lematriz(int matriz[100][100], char arquivo[], int &n, int &m)
{
  FILE *entrada = fopen(arquivo, 'r');

  fscanf(entrada, "%d", n);
  fscanf(entrada, "%d", m);

  for (int i = 0; i < *n; i++)
  {
    for (int j = 0; j < *m; j++)
    {
      fscanf(entrada, "%d", &matriz[i][j]);
    }
  }

  fclose(entrada);
}

int main()
{
  int matriz[100][100];
  FILE *saida = fopen("filematriz.txt", 'r');
  int n, m;
  fclose(saida);
  lematriz(matriz, saida, &n, &m);
  return 0;
}