//ler 10 numeros inteiros do teclado para depois imprimir os numeros
//na ordem inversa de leirtura
#include <stdio.h>
#define TAM 10

int main()
{
    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    printf("\n");

    //imprindo na ordem inversa
    for (int i = TAM - 1; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    return 0;
}
