// Given a number N, print least prime factors for all numbers from 1 to N. The least prime factor of an integer N is the smallest prime number that divides it. The least prime factor of all even numbers is 2. A prime number is its own least prime factor (as well as its own greatest prime factor). Note : 1 needs to be printed for 1.
// Input: N = 6
// Output: 1 2 3 2 5 2
// Constraints: 2 ≤ N ≤ 1000
#include <bits/stdc++.h>
using namespace std;
int prime_factor(int n)
{
    if (n==1) return 1;
    for (int i=2;i<=n;i++)
    {
        if (n%i==0) return i;
    }
}
vector <int> least_prime_factors(int n)
{
    vector <int> lpf;
    for(int i = 0; i<=n;i++)
    {
        int t = prime_factor(i);
        lpf.push_back(t);
    }
    return lpf;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    vector<int> lpf = least_prime_factors(n);
    cout << "\nLeast prime factors for all numbers from 1 to " << n << " are: ";
    for (int i = 1; i <=n; i++)
    {
        cout << lpf[i] << " ";
    }
}