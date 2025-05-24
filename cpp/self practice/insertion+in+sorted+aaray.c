#include <stdio.h>
void main()
{
    int n , A[100];
    printf ("Enter the no of elements in array: ");
    scanf ("%d",&n);
    printf ("\nEnter the sorted array: ");
    for (int i = 0; i<n ; i++)
    {
        scanf ("%d",&A[i]);
    }

    int key;
    printf ("\nEnter the no to be inserted: ");
    scanf("%d",&key);

    int index;
    for (int i = 0; i<n ; i++)
    {
        if (A[i]>key)
        {
            index = i;
            break;
        }
    }

    for (int i = n-1 ; i >= index ; i--)
    {
        A[i+1] = A[i];
        
    }

    A[index] = key;

    printf ("\nThe new array: ");
    for (int i = 0; i<=n ; i++)
    {
        printf ("%d ",A[i]);
    }
}