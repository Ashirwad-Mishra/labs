//Print all prime factors of the given number
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < n ;i++)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}
vector <int> primeFactors(int n)
{
    vector <int> pf;
    for (int i = 2 ;i<=n;i++)
    {
       if  (n%i==0 && isPrime(i))
       {
            pf.push_back(i);
       }
    }
    return pf;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    vector <int> temp = primeFactors(n);
    cout << "\nThe prime factors of "<< n << " are ";
    for (int i : temp)
    {
        cout << i <<" ";
    }
}