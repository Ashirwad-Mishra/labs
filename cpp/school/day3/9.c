#include <stdio.h>
void main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int a = 3 - i; a > 1; a--)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i >= 0; i--)
    {
        for (int a = 3 - i; a > 1; a--)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
