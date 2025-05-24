#include <iostream>
int main()
{
    int A[1000],n,sum = 0;
    std :: cout << "Number of elements in the array: ";
    std :: cin >> n;
    std :: cout << "\nEnter the array : ";
    for (int i =0;i<n;i++)
    {
        std :: cin >> A[i];
    }
    for (int i =0;i<n;i++)
    {
        sum+= A[i];
        A[i] = sum;
    }
    std :: cout << "\nThe sum array: ";
    for (int i =0;i<n;i++)
    {
        std :: cout << A[i] << " ";
    }
}