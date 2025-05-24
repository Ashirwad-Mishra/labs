#include<iostream>
int main ()
{
    int m,n,t1,t2;

    std :: cout << "Enter the nos: ";
    std :: cin >> m >> n;
    
    do {
        if (m>n) m= m-n;
        else if (n>m) n=n-m;
    } while (m!=n) ;
    std :: cout  << "\nthe gcd ="<< m;
}