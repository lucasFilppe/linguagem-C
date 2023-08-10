#include <stdio.h>

int main(){

    int matriz[4][4];
    int valoresMaiores = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 10)
        {
            valoresMaiores++; 
        }  
        }

          
    } 

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    

    //valores maiores que 10
    printf("quantidade de Valores maiores que 10 = %d\n", valoresMaiores);


       
    return 0;
}