#include <stdio.h>

int main(){
    int v[10];
    int maior = 0;
    int posicao;
    

    //ler vetor de 10 posiçoes
    printf("Digite os valores do vetor: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);

        if (v[i] > maior)
        {
            maior = v[i];
            posicao = i;
        }
           
    }

    printf("\n\n");
    printf("Impimindo vetor\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
    printf("Maior %d\n", maior);
    printf("Posicao %d\n", posicao);

    return 0;
}