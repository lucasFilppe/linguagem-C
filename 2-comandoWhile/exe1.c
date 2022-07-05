#include <stdio.h>

int main()
{
    int n, num;

    printf("Digite qunto numeros quer digitar: ");
    scanf("%d", &n);

    int i = 1;
    float soma = 0.0;
    while (i <= n)
    {
        printf("Numero %d: ", i);
        scanf("%d", &num);

        soma += (float)1 / (float)num;
        i++;
    }
    
    float h = n / soma;

    printf("A media harmonica eh %.2f\n", h);
    return 0;
}