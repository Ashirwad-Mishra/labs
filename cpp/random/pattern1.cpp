#include<bits/stdc++.h>
using namespace std;
int main()
{
    char k = 'A';
    for (int i = 0 ; i < 4 ; i++)
    {
        for (int j = 0 ; j <= i; j++)
        {
            if (i%2!=0)
            {
                if (j%2==0)
                {
                    cout << char(k+32);
                }
                else cout << k;
            }
            else
            {
                if (j%2!=0)
                {
                    cout << char(k+32);
                }
                else cout << char(k);
            }
            k++;
        }
        cout << endl;
    }
}