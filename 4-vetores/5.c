#include <stdio.h>

//funçao que retorna maior numero de um vetor
int maior(int vetor[], int tamanho) {
    int maior = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        
    }
    
    return maior;
}

int main() {

    int n = 4;

    int vetor[] = {1, 6, 9, 8};

    //chamando função maior
    printf("O maior numero do vetor eh %d\n", maior(vetor, n));
    return 0;
}