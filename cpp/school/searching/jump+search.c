#include<stdio.h>
#include <math.h>
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
    int start = 0;
    int step = sqrt(n);
    int end= step;
    while (start<n && A[end-1] <key )
    {
        start = end;
        end = end + step;
        if (end > n-1) end = n ;
    }
    for (int i = start ; i < end ; i++)
    {
        if (A[i]==key)
        {
            printf("\nThe %d is found at %d.",key,i+1);
            return 0;
        }
    }
    
    printf("\nThe %d is not found in the array.",key);
}