#include<iostream>
using namespace std;
int main ()

{
    int A[6]; int count = 0;
    for(int i = 0; i<6;i++)
    {
        cin >> A[i];
    }
    for (int i = 0;i<6;i++)
    {
        if (A[i]==1)
        {
            count  = count + 1;
        }
        if (A[i]==0)
        {
            count =0;
        }
    }
    cout << count;

}