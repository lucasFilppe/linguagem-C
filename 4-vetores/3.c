//ler 10 vetores e imprimir quantos tem valor superior a media
#include <stdio.h>
#define TAM 10
int main()
{
    float nota[TAM];
    float soma = 0;
    int i;
    for ( i = 0; i < TAM; i++)
    {
        printf("Digite o valor da nota %d: ", i + 1);
        scanf("%f", &nota[i]);

        soma += nota[i];
    }
    
    float media = soma / TAM;
    printf("Media = %f\n", media);

    int contador = 0;
    for ( i = 0; i < TAM; i++)
    {
        if (nota[i] > media)
        {
            contador++;
        }
        
    }
    
    printf("%d alunos tem notas maiores que a media\n", contador);
    return 0;
}