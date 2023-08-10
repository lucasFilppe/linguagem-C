#include <stdio.h>

int main(){

    int tam = 0;
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        tam++;
    }
    
    printf("%d", tam);
    return 0;
}