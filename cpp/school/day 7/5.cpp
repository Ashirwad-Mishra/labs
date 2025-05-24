//Program for converting all lower case letters to upper case and vice versa in the given sentence
#include<bits/stdc++.h>
using namespace std;
void ChangeCase(char &c)
{
    if (c>='A' && c<='Z')
    {
        c+=32;
    }
    else if (c>='a' && c<='z')
    {
        c-=32;
    }
}
int main()
{
    vector <char> sentence;
    char temp;
    cout << "Enter your sentence: ";
    while(cin.get(temp) && temp!='\n')
    {
        sentence.push_back(temp);
    }
    for (char &p : sentence)
    {
        ChangeCase(p);
    }
    cout <<"\nHere is your changed caes sentence: ";
    for (char p : sentence)
    {
        cout << p;
    }
}