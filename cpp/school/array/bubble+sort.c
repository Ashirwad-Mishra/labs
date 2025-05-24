#include<stdio.h>
void main()
{
    int A[6] = {34,56,23,45,89,12};
    for (int i = 0; i<6;i++)
    {
        for (int j= 0;j<6-i;j++)
        {
                if (A[j]>A[j+1])
                {
                    int temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
                }
        }
    }

    printf("The sorted array: ");
    for (int i = 0;i<6;i++)
    {
        printf("%d  ",A[i]);
    }
}