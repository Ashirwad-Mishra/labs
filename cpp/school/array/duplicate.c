#include <stdio.h>
void main()
{
    int A[10], n, c=0;
    printf ("Enter the number of elements: ");
    scanf ("%d",&n);
    printf ("\nEnter the array: ");
    for (int i =0;i<n;i++)
    {
        scanf ("%d",&A[i]);
    }

    for (int i =0;i<n;i++)
    {
        c = 0;
        for (int j = i+1;j<n;j++)
        {
            if (A[i]==A[j])
            {
                c+=1;
                A[j] = '#';
            }
        }

    }
}