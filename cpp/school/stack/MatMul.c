#include <stdio.h>
int main()
{
    int A[10][10], B[10][10];
    int m , n;
    printf ("Enter m and n : ");
    scanf ("%d%d",m,n);
    printf ("\nEnter the MatA: ");
    for (int i = 0 ; i <m ; i++)
    {
        for (int j = 0 ; j < n ; j ++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    int p , q;
    printf ("Enter p and q : ");
    scanf ("%d%d",p,q);
    printf ("\nEnter the MatB: ");
    for (int i = 0 ; i <p ; i++)
    {
        for (int j = 0 ; j < q ; j ++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    int MatC[10][10];
    if (n == q )
    {
        for (int i = 0 ; i < m ; i ++)
        {
            for (int j = 0 ; j < q ; j++)
            {
                MatC[i][j] = A[i][j]*B[j][i];
                for (int k = 0 ; k < m ; k++)
                {
                    MatC[i][j]+= A[i][k]*B[k][i];
                } 
            }
        }
    }
    printf("\nThe A*B = \n");
    for (int i = 0 ; i <p ; i++)
    {
        for (int j = 0 ; j < q ; j ++)
        {
            printf("%d ",&MatC[i][j]);
        }
        printf("\n");
    }
    
}