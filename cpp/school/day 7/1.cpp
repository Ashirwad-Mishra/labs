//Program for finding length of a string (User defined function)
#include<bits/stdc++.h>
using namespace std;
int StringLength(char str[])
{
    int c=0;
    for (int i=0;str[i]!='\0';i++)
    {
        c++;
    }
    return c;
}
int main()
{
    char Yourstr[100];
    cout <<"Enter the string: ";
    cin.getline(Yourstr,100);
    cout <<"\nThe length of the entered string is: "<< StringLength(Yourstr);
}