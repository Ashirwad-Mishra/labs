#include <iostream>
using namespace std;

int search(int A[], int n, int k) {
    for (int i = 0; i < n; i++) {
        if (A[i] == k) return i;
    }
    return -1; 
}

int main() {
    int A[10];
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cout << "Enter the number to be searched: ";
    cin >> k;
    int result = search(A, n, k);
    if (result != -1) {
        cout << "The number is found at index " << result << endl;
    } else {
        cout << "The number is not found in the array" << endl;
    }
    return 0;
}
