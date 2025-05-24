#include<stdio.h>
void swap(int *m ,int *n)
{
    int temp = *m;
    *m = *n;
    *n = temp;
}
int main()
{
    int n,min;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter the array: ");
    int A[n];
    for (int i = 0 ; i< n ; i++)
    {
        scanf("%d",&A[i]);
    }
    for (int i=0 ; i<n-1 ; i++)
    {
        min = i;
        for (int j = i+1 ; j < n ; j++)
        {
            if (A[min]>A[j])
            {
                min = j;
            }
        }
        if (min!=i)
        {
            swap(&A[i],&A[min]);
        }
    }
    printf("\nThe sorted array: ");
    for (int i = 0 ; i<n ; i++)
    {
        printf("%d ",A[i]);
    }
}