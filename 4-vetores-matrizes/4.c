#include <stdio.h>

int main(){

    int v[8], x, y, soma = 0;

    //ler vetor
    for (int i = 0; i < 8; i++)
    {
        printf("V[%d] = ", i);
        scanf("%d", &v[i]);
    }
    printf("\n\n");

    //ler duas posições do vetor
    printf("Digite duas posiçoes para somar desse vetor: ");
    scanf("%d %d", &x, &y);

    //somar valores encontrados
    soma = v[x] + v[y];

    //imprimir saida
    printf("Soma v[%d] + v[%d] = %d\n\n", x, y, soma);
    return 0;
}