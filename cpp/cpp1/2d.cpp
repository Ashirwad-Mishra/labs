#include <iostream>
int main()
{
    int A[10][10],m,n,B[10][10];
    std :: cout << "Enter length and breadth of the matA: ";
    std :: cin >> m >> n;
    std :: cout << "\n Enter the MatA: ";
    for (int i = 0;i<m;i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            std :: cin >> A[i][j];
        }
    }
    // to find trace of the MatA
    int trace = 0;
    for  (int i = 0;i<m;i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            if (i==j) trace += A[i][j];
            
        }
    }
    std :: cout << "\nThe trace of MatA: "<< trace;
    // to transverse a mat
     for (int i = 0;i<m;i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            B[i][j] = A[j][i];
        }
    }
    std :: cout << "\nThe  transverse of MatA: \n";
    for (int i = 0;i<m;i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            std :: cout << B[i][j] << " ";
        }
        std :: cout << "\n";
    }
    
}