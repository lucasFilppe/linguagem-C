//ler 5 notas e, em seguida, calcular e imprimir a maior nota
#include <stdio.h>
#define TAM 5

int main()
{
    float maior = 0;
    float nota[TAM];

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o valor da nota do %d° aluno: ", i+1);
        scanf("%f", &nota[i]);

        //verifica nota maior
        if (nota[i] > maior)
        {
            maior = nota[i];
        }
        
    }

    printf("\n");
    printf("A maior nota eh %.2f\n", maior);

    return 0;
    
}