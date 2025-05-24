#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k = 1;
    for (int i = 1 ; i < 5 ; i ++)
    {
        for (int l = 4 ; l > i ; l--)
            {
                cout << " ";
            }
        for (int j = 0 ; j < i ; j ++)
        {
            
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}