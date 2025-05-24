
#include <stdio.h>

int main() {
    int A[100], n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    printf("\nEnter the numbers in array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int key[10], m;
    printf("\nTotal number of elements you want to insert: ");
    scanf("%d", &m);

    printf("\nEnter the keys to be inserted: ");
    for (int t = 0; t < m; t++) {
        scanf("%d", &key[t]);
    }

    printf("\nEnter the index of the first element that has to be inserted: ");
    int index;
    scanf("%d", &index);

    
    for (int j = n - 1; j >= index; j--) {
        A[j + m] = A[j];
    }

    
    for (int t = 0; t < m; t++) {
        A[index + t] = key[t];
    }

    for (int i = 0; i < n + m; i++) {
        printf("The %dth element of A is: %d\n", i + 1, A[i]);
    }

    return 0;
}
