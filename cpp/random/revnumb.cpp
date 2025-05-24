#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int temp=9;
    int temp2=0;
    while (n>0)
    {
        temp2=temp2*10 + n%10;
        n/=10;
    }
    cout << "\nThe reverse of " << temp << " is "<< temp2 << ".";
}