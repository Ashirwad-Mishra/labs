#include <stdio.h>
void main()
{
    int A[10], n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("\nEnter the array: ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    int s=0;
    int sum = n*(n+1)/2;

    for (int i = 0;i<n;i++)
    {
        s+=A[i];
    }

    printf("\nmissing: %d",sum-s);
}