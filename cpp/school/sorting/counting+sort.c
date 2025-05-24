#include <stdio.h>
int get_max(int A[],int n)
{
    int max = A[0];
    for (int i = 0; i<n ; i++)
    {
        if (A[i]>max) max = A[i];
    }
    return max;
}
void counting_sort(int* A[],int n)
{
    int temp = get_max(A,n);
    int C[10] = {0};
    for (int i =0 ; i < n ; i++)
    {
        C[*A[i]%10] ++;
    }
}