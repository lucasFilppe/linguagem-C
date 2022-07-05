#include <stdio.h>

//função que retorna a media de valores de um vetor
double media(double vetor[], int tamanho){
    double soma = 0, mediaa;

    for (int i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
    }

    mediaa = soma / tamanho;
    return mediaa;
}

int main()
{
    int n = 4;

    double vetor[] = {1, 6, 9, 8};

    //chamada da função media
    printf("A media dos valores do vetor eh %.2lf\n", media(vetor, n));
    return 0;
}