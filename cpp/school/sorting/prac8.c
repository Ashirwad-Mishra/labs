//Objective :  Selection Sort Algorithm.
#include<stdio.h>
int main()
{
    int a[20], i, n, j, t, min;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements in array : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n-1; i++)
    {
        min = i;
        for(j = i+1; j < n; j++)
        {
            if(a[min] > a[j])
            {
                min = j;
            }
        }
        if(i != min)
        {
            t = a[i];
            a[i] = a[min];
            a[min] = t;
        }
    }
    printf("Sorted array : ");
    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}