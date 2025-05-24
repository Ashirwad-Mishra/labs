#include<stdio.h>
void main()
{
    int n,A[1000];
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    int i=0,j=n-1;
    while (i<j)
    {
        /* code */
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;

        i++;
        j--;
    }
    printf("\nThe reversed array: ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}