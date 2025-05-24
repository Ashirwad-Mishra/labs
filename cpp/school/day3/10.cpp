#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 1 ; i <= 3 ; i++)
    {
        for (int k = 0 ; k < i ; k++)
        {
            if (k == 0) continue;
            else cout << " ";
        }
        for (int j = i ; i+j <=6 ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int k = 3; k > i; k--)  
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)  
        {
            cout << "*";
        }
        cout << endl;
    }
}