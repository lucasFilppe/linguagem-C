#include <stdio.h>

int main()
{
    int x  = 0;
    int *px;
    px = &x;

    *px = 99;
    printf("X = %d\n", x);
    return 0;
}