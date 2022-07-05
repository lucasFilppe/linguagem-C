#include <stdio.h>
#include <string.h>

int main() {

    char nome[50];
    printf("Digite seu nome completo:\n");
    fgets(nome, 50, stdin);

    printf("Seu nome completo eh %s\n", nome);
    return 0;
}