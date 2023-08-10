#include <stdio.h>

int main(){
    int v[10];
    int maior = 0;
    
    //ler vetor de 10 posiçoes
    printf("Digite os valores do vetor: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
    }

    for (int i = 10 - 1; i >= 0; i--)
    {
        printf("%d ", v[i]);
    }
    
    return 0;
}