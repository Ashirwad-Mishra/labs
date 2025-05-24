#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter the array: ");
    int A[n];
    for (int i = 0 ; i< n ; i++)
    {
        scanf("%d",&A[i]);
    }
    for (int i = 0; i < n-1 ; i++)
    {
        for (int j = 0 ; j < n-i-1 ; j++)
        {
            if (A[j]>A[j+1]) 
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    printf("\nThe sorted array: ");
    for (int i = 0 ; i<n ; i++)
    {
        printf("%d ",A[i]);
    }
}