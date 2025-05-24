 #include<stdio.h>
 int getmax(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) 
            max = a[i];
    }
    return max;
 }
 void countingSort(int a[], int n, int exp) {
    int output[n]; 
    int count[10] = {0};
    for (int i = 0; i < n; i++) 
        count[(a[i] / exp) % 10]++;
    for (int i = 1; i < 10; i++) 
        count[i] += count[i - 1];
    for (int i = n - 1; i >= 0; i--) {
        output[count[(a[i] / exp) % 10] - 1] = a[i];
        count[(a[i] / exp) % 10]--;
    }
    for (int i = 0; i < n; i++) 
        a[i] = output[i];
 }
 void radixSort(int a[], int n) {
    int max = getmax(a, n);
    for (int d = 1; max / d > 0; d *= 10)
        countingSort(a, n, d);
 }
 int main() {
    int size, a[100];
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for (int i = 0; i < size; i++) 
        scanf("%d", &a[i]);
    radixSort(a, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) 
        printf("%d ", a[i]);
    return 0;
 }