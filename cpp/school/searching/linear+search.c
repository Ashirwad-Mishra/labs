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
    for (int i = 0 ; i <= n ; i++)
    {
        if (A[i]==key)
        {
            printf("\n%d found at %d.",key,i+1);
            return 0;
        }
        else if (i==n)
        {
            printf("\nThe %d is not Found.",key);
            return 0;
        }
    }
}