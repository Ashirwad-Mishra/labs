#include <stdio.h>
int main()
{
    int n, A[100];
    printf ("Enter the no of elements in array: ");
    scanf("%d",&n);
    printf ("\nenter the sorted array: ");
    for (int i = 0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    int key;
    printf("\nEnter the no to be inserted: ");
    scanf("%d",&key);

    for (int t=0;t<n;t++)
    {
        if (key<A[t]) break;
    }

    for (int i=t;i<n+1;i++)
    
}