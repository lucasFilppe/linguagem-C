#include <stdio.h>

int main()
{
   char nome[100];
   
   printf("Digite um nome: ");
   scanf("%s", nome);
   
   for(int i = 0; i < 4; i++){
       printf("%c", nome[i]);
   }
   printf("\n\n");
    return 0;
}
