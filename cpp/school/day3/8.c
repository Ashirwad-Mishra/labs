#include <stdio.h>

void main()
{
    for (int i = 0; i <= 4; i++)
    {
        for (int a = 4 - i; a > 0; a--)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
