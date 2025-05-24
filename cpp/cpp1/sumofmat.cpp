#include<iostream>
int main()
{
    int A[3][3] = {3,5,67,89,0,23,12,45,0};
    int B[3][3] = {78,6,45,34,0,9,97,23,34};
    int C[3][3],sum=0;
    for (int i = 0;i<3;i++)
    {
        for (int j = 0;j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }

    }
    for (int i = 0;i<3;i++)
    {
        for (int j = 0;j<3;j++)
        {
            std :: cout << C[i][j]<<" ";
        }
        std :: cout << std::endl;

    }
    for (int i = 0;i<3;i++)
    {
        for (int j = 0;j<3;j++)
        {
            sum += C[i][j];
        }

    }
    int ave = sum/9;
    std :: cout << "\nThe average : "<<ave;

}