#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    // Find the roots of a quadratic equation
    int a, b, c;
    cout << "Enter the coefficient of x squared (a): ";
    cin >> a;
    cout << "Enter the coefficient of x (b): ";
    cin >> b;
    cout << "Enter the constant term (c): ";
    cin >> c;

    double d = b * b - 4 * a * c; 

    if (d > 0) 
    {
        double x1 = (-b - sqrt(d)) / (2 * a);
        double x2 = (-b + sqrt(d)) / (2 * a);
        cout << "The roots are real and different:\n";
        cout << "Root 1: " << x1 << endl;
        cout << "Root 2: " << x2 << endl;
    } 
    else if (d == 0) 
    {
        double x = -b / (2 * a);
        cout << "The roots are real and the same:\n";
        cout << "Root: " << x << endl;
    } 
    else 
    {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-d) / (2 * a);
        cout << "The roots are complex and different:\n";
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i\n";
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i\n";
    }

    return 0;
}
