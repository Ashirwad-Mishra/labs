#include<bits/stdc++.h>
using namespace std;

void shift(int i, int A[])
{
    A[i+1] = A[i];
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int A[n];
    printf("\nEnter the array: ");
    for (int i = 0 ; i<n ; i++)
    {
        scanf("%d",&A[i]);
    }
    for (int i = 1; i < n; i++)
    {
        int temp = A[i];
        if (temp < A[i-1])
        {
            int j = i - 1;
            while (A[j] > temp && j >= 0)  
            {
                shift(j, A);
                j--;
            }
            A[j + 1] = temp;
        }
    }
    
    cout << "The Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}