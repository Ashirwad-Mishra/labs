#include<bits/stdc++.h>
using namespace std;
void sieveOfErathosthenes(int n)
{
    int spf[n+1] = {0};
    for (int i = 2 ; i<=n ; i++)
    {
        spf[i] = i;
    }
    for (int i = 2 ; i<=n ; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i*i ; j<= n ; j+=i)
            {
                spf[j] = i;
            }
        }
    }
    while (n!=1)
    {
        cout << " " << spf[n];
        n/=spf[n];
    }
}
int main()
{
    int t;
    cout << "Enter the number: ";
    cin >> t;
    cout << "\nThe prime till " << t << " is ";
    sieveOfErathosthenes(t);
}