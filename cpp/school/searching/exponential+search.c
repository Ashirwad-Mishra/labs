#include <stdio.h>

void linearSearch(int A[], int key, int low, int high) {
    for (int i = low; i < high; i++)
    {
        if (A[i] == key)
        {
            printf("\n%d found at position %d.\n", key, i + 1);
            return;
        }
    }
    printf("\nThe %d is not found in the array.\n", key);
}

int main() {
    int n;
    printf("Enter the number of numbers in the array: ");
    scanf("%d", &n);
    int A[n];
    printf("\nEnter the elements of the array (sorted): ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    int key;
    printf("\nEnter the number you are looking for in the array: ");
    scanf("%d", &key);
    if (A[0] == key)
    {
        printf("\nThe %d is found at position %d.\n", key, 1);
        return 0;
    }
    int i = 1;
    while (i < n && A[i] <= key) {
        if (A[i] == key)
        {
            printf("\nThe %d is found at position %d.\n", key, i + 1);
            return 0;
        }
        i *= 2; 
    }
    linearSearch(A, key, i / 2, i < n ? i : n);

    return 0;
}
