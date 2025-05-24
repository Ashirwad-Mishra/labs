#include <stdio.h>
int main()
{
    int A[100] , n ;
    printf ("Enter the no of elements in array: ");
    scanf ("%d",&n);
    printf ("\nEnter the elements of the array: ");
    for (int i = 0; i < n;i++) {scanf ("%d",&A[i]) ; }
    for (int i = 0; i<n-1 ; i++)
    {
        for (int j = 0; j<n-i-1 ; j++)
        {
            if (A[j]>A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    int max = A[n-1];

    int f[max+1] ;

    for (int i = 0; i< max + 1 ; i++)
    {
        f[i] = 0;
    }

   /* int i = 0 , j = 0;
    while ( j < n )
    {
        if (i == A[j])
        {
            f[i] ++;
        
            j++;
        }
        i++;
    }
    this method works, but, takes too much time.
    */

   for (int i = 0; i <n ; i ++)
   {
        f[A[i]] ++; // this is so fast.
   }

    for (int i = 0; i<max+1; i++)
    {
        if (f[i]>0) printf ("%d occurs %d times.\n",i,f[i]) ;
    }
}