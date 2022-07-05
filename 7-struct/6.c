#include <stdio.h>

typedef struct{
    char nome[50];
    float altura;
    int ano;
}DadosP;

//função que inseri uma nova pessoa
DadosP novaPessoa(){
    DadosP p;
    printf("Nome: ");
    getchar();
    fgets(p.nome, 50, stdin);
    printf("Altura = ");
    scanf("%f", &p.altura);
    printf("Ano nascimento = ");
    scanf("%d", &p.ano);

    return p;
}

//funçao que lista nomes e alturas
void imprimeNomesAltura(DadosP v[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("Altura %.2f, %s", v[i].altura, v[i].nome);
    }

}

int main(){
    int n = 0, opcao;
    DadosP pessoa[100];

      // inicialmente não temos dados de nenhuma pessoa
    do
    {
        printf("Digite 1 para entrar em dados de uma pessoa\n");
        printf(" 2 para imprimir altura e nome\n");
        printf(" 0 para terminar\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            pessoa[n] = novaPessoa();
            n++;
            break;
        case 2:
            imprimeNomesAltura(pessoa, n);
            break;
        }
    } while (opcao != 0);
    return 0;
}