#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,opt;
    cout << "Enter A and B: \n";
    cin >> a >> b ;
    cout << "Enter \n 1 for sum. \n 2 for diff. \n 3 for product\n 4 for quotient \n 5 for remainder\n";
    cin >> opt;
    switch (opt)
    {
    case 1:
        c = a + b;
        break;
        case 2:
        c = a - b;
        break;
        case 3:
        c = a*b;
        break;
        case 4:
        c = a/b;
        break;
        case 5:
        c = a%b;


    
    default:
    cout << "Choose correct option";
        break;
    }
    cout << "\nThe result is: "<<c;

}