#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    string str = "oadyisybkeybwydbiybieiebkyibf;oewf'unoubfb;ifb;efbe";
    string :: iterator it;
    int c=0;
    for (it=str.begin();it!=str.end();it ++)
    {
        c+=1;
    }
   cout << "\n The length of the string = "<<c;
}
