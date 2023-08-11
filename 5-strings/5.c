#include <stdio.h>

int main()
{

    char nome[100];
    int count = 0;
   
    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin);
   
    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] != ' ' && nome[i] != '\n') {
            count++;    
        }
    }
   
    printf("Esse nome tem %d letras\n", count);
    return 0;
}