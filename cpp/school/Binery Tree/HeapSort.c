#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void maxHeapify(int A[], int n, int largest)
{
    int i = largest;
    int l = 2 * i + 1; 
    int r = 2 * i + 2;
    int max = i;

    if (l < n && A[l] > A[max]) 
    {
        max = l;
    }
    if (r < n && A[r] > A[max]) 
    {
        max = r;
    }
    if (max != i) 
    {
        swap(&A[i], &A[max]);
        maxHeapify(A, n, max);
    }
}

void BuildHeap(int A[], int n)
{
    for (int i = (n - 2) / 2; i >= 0; i--) 
    {
        maxHeapify(A, n, i);
    }
}

void HeapSort(int A[], int n)
{
    BuildHeap(A, n); 
    for (int i = n - 1; i >= 0; i--) 
    {
        swap(&A[0], &A[i]);
        maxHeapify(A, i, 0);
    }
}

int main()
{
    int A[5] = {5, 4, 3, 2, 1};
    HeapSort(A, 5);
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", A[i]);
    }
    return 0;
}