#include <stdio.h>

int main()
{
    int x = 10, y = 0;
    int *px = &x;
    y = *px; 
    printf("y = %d\n", y);
    return 0;
}