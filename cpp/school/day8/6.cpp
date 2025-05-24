//Given radius of a circle, find the area of largest possible rectangle which may be enclosed completely within it.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << "\nThe matter of fact is that the largest rectangle that can fit inside a circle is always a square.\n";
    double arr = pow((r*sqrt(2)),2);
    cout << "The area of that rectangle is "<< arr;
}