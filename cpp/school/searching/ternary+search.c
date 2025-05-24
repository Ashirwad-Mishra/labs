#include<stdio.h>
int main()
{
    int n ; 
    printf("Enter the number of numbers in array: ");
    scanf("%d",&n);
    int A[n];
    printf("\nEnter the elements of array: ");
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d",&A[i]);
    }
    int key;
    printf("\nEnter the number you are looking for in the array: ");
    scanf("%d",&key);
    int low = 0;
    int high= n-1;
    while (low<=high)
    {
        int mid1 = low + (high-low)/3;
        int mid2 = high - (high - low )/3;
        if (key==A[mid1])
        {
            printf("\n%d found at %d position.",A[mid1],mid1+1);
            return 0 ; 
        }
        else if (key==A[mid2])
        {
            printf("\n%d found at %d position.",A[mid2],mid2+1);
            return 0 ; 
        }
        else if (key > A[mid1]&&key < A[mid2])
        {
            low = mid1 + 1;
            high = mid2 - 1;
        }
        else if (key < A[mid1])
        {
            high = mid1-1;
        }
        else if (key > A[mid2])
        {
            low = mid2 + 1;
        }
    }
    printf("\nThe %d is not found in the array.",key);
}