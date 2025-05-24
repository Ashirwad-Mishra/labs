//Given a non-negative integer num, repeatedly add all its digits until the result has only one digit. For example, if we conisder 98, we get 9+8 = 17 after first addition. Then we get 1+7 = 8. We stop at this point because we are left with one digit.
#include <iostream>
using namespace std;
int sum_of_digit(int n)
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
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sum=0;
    while (n>9)
    {
        n=sum_of_digit(n);
    }
    cout << "\nThe required sum = " << n;
    cout << "\nThrough digital roots method...........\n";
    if (n%9==0) cout << "\nThe required sum = " << 9;
    else cout << "\nThe required sum = " << n%9;
}