// Given an odd-digit-number N, you need to find whether the given number is a balanced-number or not. An odd digit number is called a balanced number if the sum of all digits to the left of the middle digit and the sum of all  digits to the right of the middle digit is equal. Note:- The number of digits of 1234006. is 7, i.e. odd digits. The middle digit is 4. LHS sum is 1+2+3=6, and RHS sum is 0+0+6=6.
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int digit_sum(int n)
{
    int sum = 0;
    while (n>9)
    {
        sum +=n%10;
        n/=10;
    }
    sum += n;
    return sum;
}
int main()
{
    int p;
    cout <<"Enter the given number: ";
    cin >> p;
    int n= log10(p)+1;
    if (n % 2 == 0) 
    {
        cout << "The number must have an odd number of digits." << endl;
        return 0;
    }
    int left_part = p % static_cast <int> (pow(10,n/2));
    p/=pow(10,n/2+1);
    if (digit_sum(left_part)==digit_sum(p))
    {
        cout << "The given number is ballanced.";
        return 0;
    }
    else 
    {
        cout << "The given number is not ballanced.";
        return 0;
    }
}