#include<iostream>
int main()
{
    int sum = 0;
    int A[] ={23,56,87,76,90,65,67,98,90};
    for (int x:A)
    {
        std :: cout << x << std::endl;
    }
    for (int x:A)
    {
        sum = sum + x;
    }
    std :: cout << "\n" << "the sum = "<< sum;
    int max = A[0];
    for (auto x:A)
    {
        if (x>max)
        {
            max = x;
        }
    }
    std :: cout << "\n max = "<<max;
}