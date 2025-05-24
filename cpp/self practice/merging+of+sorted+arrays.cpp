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
    int C[m+n];
    int i = 0;
    int j = 0;
    int k = 0;
    while (k < m+n)
    {
        if (A[i]>B[j])
        {
            C[k] = B[j];
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            C[k] = A[i];
            k++;
            i++;
        }
        else 
        {
            C[k] = A[i];
            i++;
            j++;
            k++;
        }
    }
    cout << "\nThe merged array: ";
    for (int i = 0; i< m+n ; i++)
    {
        cout << " " << C[i];
    }

}