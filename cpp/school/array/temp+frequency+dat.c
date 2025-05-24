#include <stdio.h>

void main() {
    int A[100], n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("\nEnter the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int max = A[0];
    for (int i = 1; i < n; i++) 
    {  
        if (max < A[i]) {
            max = A[i];
        }
    }

    int dat[max + 1];
    for (int i = 0; i <= max; i++) {
        dat[i] = 0;  
    }

    for (int i = 0; i < n; i++) {
        dat[A[i]]++;  
    }

    printf("Frequency of elements:\n");
    for (int i = 0; i <= max; i++) {
        if (dat[i] != 0) {
            printf("%d occurs %d times\n", i, dat[i]);
        }
    }
}
