#include <stdio.h>

int main()
{
    // declaração das variáveis
    float mat[4][5] = { {1,2 , 3, 4, 5 }, { 0, -1, 0, -3, 1}, {2, -2, -2, 2, 0}, {0, 0, 0, 0, 6}}, somaLinha[4], total;

    // total se inicia com zero
    total = 0;

    for (int i = 0; i < 4; i++)
    {
        // a soma da cada linha é inicializada com zero
        somaLinha[i] = 0;

        // somando os valores da linha em somaLinha[i]
        for (int j = 0; j < 5; j++){
            somaLinha[i] += mat[i][j];
        }
        // somando o total de cada linha
        total += somaLinha[i];
    }

    // imprimindo o conteudo da matriz
    for (int i = 0; i < 4; i++)
    { // para as linhas
        for (int j = 0; j < 5; j++)
        { // para as colunas
            printf("%4.2f  ", mat[i][j] );
        }
        printf("=  %4.2f", somaLinha[i]);
        printf("\n");
        
    }

    printf("Total de todas as linhas %f\n", total);
    return 0;
}