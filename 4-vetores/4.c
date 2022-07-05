#include <stdio.h>
#define N 10
int main() {
    int vetor[N] = {1, 2, 3 , 4, 5, 6, 7, 8, 0, 10};
    int valor;
    scanf("%d", &valor);

    //variaveis auxiliares
    int i;
    int encontrado = 0;

    //buscando elemento
    for ( i = 0; i < N; i++)
    {
        if (vetor[i] == valor)
        {
            encontrado = 1;
            break;
        }
        
    }
    
    if (encontrado)
    {
        printf("Item encontrado na posição %d\n", i);
    }
    
    else
    {
        printf("Item nao encontrado\n");
    }
    
}
