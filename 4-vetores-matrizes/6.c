#include <stdio.h>

int main(){
    int v[10];
    int maior = 0;
    int menor = 99999;

    //ler vetor de 10 posiçoes
    printf("Digite os valores do vetor: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);

        if (v[i] > maior)
        {
            maior = v[i];
        }
        
        if (v[i] < menor)
        {
           menor = v[i];
        }
           
    }

    printf("\n\n");
    printf("Maior %d\n", maior);
    printf("MENOR = %d\n", menor);

    return 0;
}
