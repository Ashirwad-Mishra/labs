#include <iostream>
using namespace std;
int main()
{
    int n ; 
    cout << "Enter the number of elements in array1: ";
    cin >> n;
    int A[n];
    cout << "Enter the numbers in array1: ";
    for (int i = 0 ; i < n ; i++)
    {
        cin >> A[i];
    }
    int m ; 
    cout << "Enter the number of elements in array2: ";
    cin >> m;
    int B[m];
    cout << "Enter the number of array2: ";
    for (int i = 0 ; i < m ; i++)
    {
        cin >> B[i];
    }
    for (int i = 0; i<n-1; i++)
    {
        for (int j = 0 ; j < n- i - 1; j++)
        {
            if (A[j]>A[j+1])
            {
                int t = A[j];
                A[j] = A[j+1];
                A[j+1] = t;
            }
        }
    }
    for (int i = 0; i<m-1; i++)
    {
        for (int j = 0 ; j < m- i - 1; j++)
        {
            if (B[j]>B[j+1])
            {
                int t = B[j];
                B[j] = B[j+1];
                B[j+1] = t;
            }
        }
    }
    
    int temp = 0;
    {
        int i = 0 ; 
        int j = 0;
        while (i<n && j<m)
        {
            if (A[i]==B[j])
            {
                temp++;
                i++;
                j++;
            }
            else if (A[i]<B[j]) 
            {
                i++;
            }
            else if (A[i]>B[j]) 
            {
                j++;
            }       
        }
    
    }
    int C[m+n-temp];
    int i = 0;
    int j = 0;
    int k = 0;
    while (n>i && m > j)
    {
        if (A[i]>B[j])
        {
            C[k++] = B[j++];
        }
        else if (A[i]<B[j])
        {
            C[k++] = A[i++];
        }
        else
        {
            C[k++] = A[i++];
            j++;
        }
    }
    while (i < n) {
        C[k++] = A[i++];
    }
    while (j < m) {
        C[k++] = B[j++];
    }
    cout << "\nThe A union B : ";
    for (int i = 0 ; i < m+n-temp ; i++)
    {
        cout << C[i] << " ";
    }
    
}