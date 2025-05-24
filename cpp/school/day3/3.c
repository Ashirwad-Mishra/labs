#include <stdio.h>
#include <math.h>
int main()
{
    char x = 'A';
    for (int i = 0;i<3;i++)
    {
        for (int j = 0; j<=i;j++)
        {
            printf("%c ",x);
           
        }
        x++;
        printf("\n");

    }
}