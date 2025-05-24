#include <stdio.h>
#include <math.h>
int main()
{
    int k = 0;
    for (int i = 0; i< 4;i++)
    {
        for (int j = 1; j<=i+1; j++)
        {
            k++;
            printf("%d ",k);
        }
        printf ("\n");
    }
}