#include <iostream>
using namespace std;

// Merge two sorted subarrays A[l..m] and A[m+1..h]
void merge(int A[], int l, int m, int h) {
    int n1 = m - l + 1;
    int n2 = h - m;

    // Create temporary arrays
    int a[n1], b[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        a[i] = A[l + i];
    for (int j = 0; j < n2; j++)
        b[j] = A[m + 1 + j];

    // Merge the temporary arrays back into A[l..h]
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            A[k] = a[i];
            i++;
        } else {
            A[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements of a[]
    while (i < n1) {
        A[k] = a[i];
        i++;
        k++;
    }

    // Copy any remaining elements of b[]
    while (j < n2) {
        A[k] = b[j];
        j++;
        k++;
    }
}

// Recursive merge sort function
void mergeSort(int A[], int l, int h) {
    if (l < h) {
        int m = l + (h - l) / 2; // Find the middle point
        mergeSort(A, l, m);      // Sort first half
        mergeSort(A, m + 1, h);  // Sort second half
        merge(A, l, m, h);       // Merge the sorted halves
    }
}

int main() {
    int A[11] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 12};
    int size = sizeof(A) / sizeof(A[0]);

    mergeSort(A, 0, size - 1);  // Sort the array

    // Print the sorted array
    cout << "Sorted array: \n";
    for (int i = 0; i < size; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
