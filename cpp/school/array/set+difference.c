#include<stdio.h>
int main()
{
    int A[100],B[100],C[200];
    int n,m;
    printf("Enter the length of the 1st array: ");
    scanf("%d",&n);
    printf("\nEnter the sorted array1: ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Enter the length of the 2st array: ");
    scanf("%d",&m);
    printf("\nEnter the sorted array2: ");
    for (int i=0;i<m;i++)
    {
        scanf("%d",&B[i]);
    }

    int i=0,j=0,k=0;
    int ele = 0;
    if (A[i]<B[i]){
    while (i<n&&j<m)
    {
        if (A[i]<B[j])
        {
            C[k] = A[i];
            i++;
            k++;
            ele+=1;
            
        }
        else {
            if (B[j]<A[i])
            {
                
                j++;
            }
            else {
                i++;
                j++;
                
            }
        }

    }
    }
    else {
        while (i<n&&j<m)
    {
        if (B[i]<A[j])
        {
            C[k] = B[i];
            i++;
            k++;
            ele+=1;
            
        }
        else {
            if (A[j]<B[i])
            {
                
                j++;
            }
            else {
                i++;
                j++;
                
            }
        }

    }
    }

    printf("\nThe needed array: ");
    for (int a = 0; a<ele;a++)
    {
        printf ("%d  ",C[a]);
    }


}