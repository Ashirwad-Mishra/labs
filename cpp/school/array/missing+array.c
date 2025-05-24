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

    for (int i=0,j=n-1;i>j;i++,j--)
    {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }

    for (int i=0;i<n;i++)
    {
        printf ("The %dth element of A is: %d\n",i+1,A[i]);
    }
}