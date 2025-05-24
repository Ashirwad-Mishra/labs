#include<stdio.h>
int main()
{
    int A[100],B[100],C[200];
    int n,m;
    printf("Enter the length of the 1st array: ");
    scanf("%d",&n);
    printf("\nEnter the sorted array1: ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Enter the length of the 2st array: ");
    scanf("%d",&m);
    printf("\nEnter the sorted array2: ");
    for (int i=0;i<m;i++)
    {
        scanf("%d",&B[i]);
    }

    int i = 0,j=0,k=0;
    while (i<n && j<m)
    {
        /* code */
        if (A[i]<B[j])
        {
            C[k] = A[i];
            i++;
            k++;
        }

        else if (A[i]>B[j])
        {
            C[k] = B[j];
            j++;
            k++;
        }
    }

    while (i<n)
    {
        C[k] = A[i];
        k++;
        i++;
    }

    while (j<m)
    {
        C[k] = B[j];
        k++;
        j++;
    }

    printf("\nThe needed array: ");
    for (int a = 0; a<m+n;a++)
    {
        printf ("%d  ",C[a]);
    }

    
}