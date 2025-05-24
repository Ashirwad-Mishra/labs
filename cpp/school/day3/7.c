#include <stdio.h>
void main()
{
    int k;
    for (int i = 1; i <= 4; i++)
    {
        for (int s = 1; s <= 4 - i; s++)
        {
            printf(" ");
        }
        k = i;
        for (int j = 1; j <= i; j++)
        {
            printf("%d", k);
            k--;
        }
        k = 2;
        for (int j = 1; j < i; j++)
        {
            printf("%d", k);
            k++;
        }
        printf("\n");
    }
}
