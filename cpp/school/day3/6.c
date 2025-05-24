#include <stdio.h>

void main()
{
    int k, temp;
    for (int i = 0; i <= 3; i++)
    {
        for (int a = 4 - i; a > 0; a--)
        {
            printf(" ");
        }

        k = i + 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d", k);
            k++;
        }

        k = k - 2;
        for (int j = 0; j < i; j++)
        {
            printf("%d", k);
            k--;
        }

        printf("\n");
    }
}
