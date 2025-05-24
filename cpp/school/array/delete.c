#include <stdio.h>
int main()
{
    int A[199],n;
    printf ("Enter the number of numbers in array: \n");
    scanf ("%d",&n);

    printf("\nEnetr the elements of the array: ");
    for (int i = 0; i<n;i++)
    {
        scanf ("%d",&A[i]);
    }

    int index;
    printf ("\nEnter the index of the number you want to delete: ");
    scanf ("%d",&index);

    for (int i = index ; i<n;i++)
    {
        A[i] = A[i+1];
    }

    for (int i=0;i<n-1;i++)
    {
        printf ("The %dth element of A is: %d\n",i+1,A[i]);
    }
}