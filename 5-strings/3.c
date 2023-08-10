#include <stdio.h>

int main(){

    char nome[100];

    printf("Digite uma palavra: ");
    scanf("%s", nome);

    if (nome[0] == 'a')
    {
        printf("%s\n", nome);
    }
    
    


    return 0;
}