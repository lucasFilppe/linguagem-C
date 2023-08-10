#include <stdio.h>

int main(){
    int v[10];
    int cont = 0;

    //ler vetor de 10 posiçoes
    printf("Digite os valores do vetor: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);

        //vefica se é par
        if (v[i] % 2 == 0)
        {
            cont++;;
        }
        
    }

    printf("\n\n");
    printf("Quatidade de pares = %d\n", cont);

    return 0;
}