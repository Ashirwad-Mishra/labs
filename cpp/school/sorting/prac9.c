#include<stdio.h>
int main()
{
    int i, a[100], size, c[100], b[100];
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array : ");
    for(i = 0; i < size; i++) scanf("%d", &a[i]);

    int max = a[0];
    for(i = 0; i < size; i++)
    {
        if(a[i] > max) max = a[i];
    }

    for(i = 0; i < max+1; i++)
    {
        c[i] = 0;
    }

    for(i = 0; i < size; i++)
    {
        c[a[i]]++;
    }

    for(i = 1; i < max+1; i++)
    {
        c[i] = c[i-1] + c[i];
    }

    for(i = size-1; i >= 0; i--)
    {
        b[c[a[i]]-1] = a[i];
        c[a[i]]--;
    }

    for(i = 0; i < size; i++)
    {
       a[i] = b[i];
    }

    printf("Sorted Array : ");
    for(i = 0; i < size; i++) printf("%d ", a[i]);

    return 0;
}
