#include <stdio.h>
void main()
{
    int sum = 0, n , A[n];
    printf ("Enter the no of elements in array: ");
    scanf ("%d", &n);
    printf ("\nEnter the elements of array: ");
    for (int i = 0 ; i<n ; i++)
    {
        scanf("%d", &A[i]);
        sum += A[i];
    }

    printf ("\nThe missing number = %d",((n*(n+1)/2)-sum));
}