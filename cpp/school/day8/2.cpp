#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //Given two numbers A and B, find Kth digit from right of A to the power B.
    int a , b,k;
    cout << "Enter A: ";
    cin >> a ;
    cout << "\nEnter B: ";
    cin >> b;
    cout << "\nEnter K: ";
    cin >> k;
    int t=a/pow(10,(k-1));
    t%=10;
    double result = pow(b,t);
    cout << "\nThe " << b << " raised to the power of "<< t << " is "<< result;
}