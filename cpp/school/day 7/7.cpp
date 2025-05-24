//Program for concatenation of two strings (User defined function)
#include <bits/stdc++.h>
using namespace std;
void ConCateNat(vector <char> &str1 , vector <char> str2)
{
    for (char c : str2)
    {
        str1.push_back(c);
    }
}
int main()
{
    vector <char> str1;
    cout << "\nEnter your first string: ";
    char temp;
    while (cin.get(temp) && temp != '\n')
    {
        str1.push_back(temp);
    }
    vector <char> str2;
    cout << "\nEnter your second string: ";
    while (cin.get(temp) && temp != '\n')
    {
        str2.push_back(temp);
    }
    ConCateNat( str1 , str2);
    cout << "\nThe concatenated string: "<<"\"" ;
    for (char c : str1)
    {
        cout << c;
    } 
    cout <<"\"";
    return 0;
}