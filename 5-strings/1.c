#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[50];
    char nome2[50];

    scanf("%s", nome1);
    scanf("%s", nome2);

    if (strcmp(nome1, nome2) == 0)
    {
        printf("Nomes iguais\n");
    }
    
    return 0;
}