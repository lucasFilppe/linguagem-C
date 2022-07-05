#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0;

    //loop enqunto i for menor ou igual a 100
    printf("numero\tquadrado\tcubo\n");
    while (i <= 100)
    {
        printf("%d \t %.0lf\t %.0lf\n", i, pow((double)i, 2), pow((double)i, 3) );
        i++;
    }

    return 0;
}