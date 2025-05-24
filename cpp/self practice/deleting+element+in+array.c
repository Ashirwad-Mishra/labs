#include <stdio.h>
void main()
{
    int A[100], n , key;
    printf ("Enter the number of elements in array: ");
    scanf("%d",&n);
    printf ("\nEnter the elements of array: ");
    for (int i = 0; i < n ; i ++)
    {
        scanf ("%d", &A[i]);
    }

    int index;
    printf("\nEnter the no to be deleted: ");
    scanf("%d",&key);
    for (int i = 0; i<n ; i++)
    {
        if (A[i]== key)
        {
            index = i;
            break;
        }
    }

    for (int i = index ; i <n ; i++)
    {
        A[i] = A[i+1];
    }

    printf("\nThe needed array: ");
    for (int i = 0; i< n-1; i++)
    {
        printf ("%d ",A[i]);
    }
}