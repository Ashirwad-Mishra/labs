#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 1, a = 8 ; i <=5 || a >=2 ; i++,a-=2)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout << j;
        }
        for (int k = 1 ; k <= a ; k++)
        {
            cout << " ";
        }
        for (int l = i ; l >= 1 ; l --)
        {
            cout << l;
        }
        cout << endl;
    }
}