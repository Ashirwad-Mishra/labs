#include <stdio.h>
void main()
{
    int k = 1;
    for (int i = 0 ;i <=3;i++)
    {
        for (int a = 4-i; a>0;a--)
        {
            printf(" ");
            
        }
        k = i+1;
        for (int j = 0; j<=i;j++)
        {
            printf("%d ",k);
            k++;
        }
        k = i+1;
        
        printf("\n");
    }
}