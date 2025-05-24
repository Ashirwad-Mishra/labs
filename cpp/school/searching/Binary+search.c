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
        int mid = (low+high)/2;
        if (key==A[mid])
        {
            printf("\n%d found at %d position.",A[mid],mid+1);
            return 0 ; 
        }
        else
        {
            if (key>A[mid])
            {
                low = mid + 1;
            }
            else high = mid - 1;
        }
    }
    printf("\nThe %d is not found in the array.",key);
}