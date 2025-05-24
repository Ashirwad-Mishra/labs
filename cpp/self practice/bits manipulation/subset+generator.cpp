#include <bits/stdc++.h>
void subset(int A[], int n)
{
    std::cout << "\nThe subsets are: \n";
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)   
        {
            if (i & (1 << j))         
            {
                std::cout << A[j] << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main()
{
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    int A[n];
    std::cout << "\nEnter the array: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> A[i];
    }
    subset(A, n);
}
