#include <stdio.h>
int main()
{
    int A[100],n;
    printf ("Enter the number of elements in array: ");
    scanf ("%d",&n);
    printf ("\nEnter the numbers in array: ");
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&A[i]);
    }

    for (int i=0;i<n;i++)
    {
        printf ("The %dth element of A is: %d\n",i+1,A[i]);
    }
}