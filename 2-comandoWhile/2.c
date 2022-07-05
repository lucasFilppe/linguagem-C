#include <stdio.h>

int main()
{
    float prova1, soma = 0;
    int n;

    printf("Digite a quantidade de alunos que fizeram a primeira prova: ");
    scanf("%d", &n);

    int i = 0;
    while (i < n)
    {
        printf("Digite a nota do aluno %d°: ", i);
        scanf("%f", &prova1);

        soma += prova1;
        i++;
    }
    
    float media = soma / i;

    printf("A media da turma eh %.2f\n", media);
    return 0;
}