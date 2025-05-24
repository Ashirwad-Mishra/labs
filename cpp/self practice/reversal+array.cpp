#include <iostream>
int main()
{
    int n;
    std :: cout << "Enter the number of elements in array: ";
    std :: cin >> n;
    int A[n] = {0};
    int B[n] = {0};
    std :: cout << "\nEnter the array: ";
    for (int i = 0; i<n ;i++)
    {
        std :: cin >> A[i];
    }
    for (int i = 0, j = n - 1 ; i <  n; i++,j--)
    {
        B[j]= A[i];
    }
    std :: cout <<"\nThe reverse of the array: ";
    for (int i = 0; i<n ; i++)
    {
        std :: cout <<" " << B[i];
    }
}