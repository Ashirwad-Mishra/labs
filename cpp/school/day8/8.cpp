//There are some coins given to you of the same denomination. The coins are arranged on a table to form a Pyramid. If the circumference of the coin is given, Find the area of traingle formed by the coins. If the coins do not form the trinagle, print -1.
#include <bits/stdc++.h>
using namespace std;
double area(double n)
{
    return n*n*sqrt(3)/4;
}
int main()
{
    int n;
    double c;
    cout << "Enter the number of coins: ";
    cin >> n;
    if (n<3)
    {
        cout <<"\nThe triangle is not possible with just " << n <<" coins.";
        return 0;
    }
    cout <<"\nEnter the circumference of each coin: ";
    cin >> c;
    double r = c/(2*M_PI);
    double side = 2*r*(n/3);
    cout << "\nThe area of the triangle is "<< area(side);
}