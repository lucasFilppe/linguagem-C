#include <stdio.h>

int main()
{
    float prova1, soma = 0;
    int n;

    printf("Digite a quantidade de alunos que fizeram a primeira prova: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {
        printf("Digite a nota do aluno %d°: ", i);
        scanf("%f", &prova1);

        //valida entrada de notas
        if (prova1 >= 0.0 && prova1 <= 10.0)
        {
             soma += prova1;
             i++;    
        }

        else
        {
            printf("Nota invalida, deve esta no intervalo[0, 10], Digite novamente: ");
            scanf("%f", &prova1);
        }
        
        
    }
    
    float media = soma / n;

    printf("A media da turma eh %.2f\n", media);
    return 0;
}