//Program for finding if the given string is a palindrome
#include<bits/stdc++.h>
using namespace std;
vector <char> ReverString(vector <char> yourString)
{
    vector <char> ReversedString;
    int front = 0;
    int rear = yourString.size()-1;
    while(rear >= 0)
    {
        ReversedString.push_back(yourString[rear]);
        rear--;
        front ++;
    }
    return ReversedString;
}
bool IsPalindrome(vector <char> bstring)
{
    return (bstring == ReverString(bstring));
}
int main()
{
    vector <char> TheString;
    cout << "Enter your string: ";
    char temp;
    while (cin.get(temp) && temp != '\n')
    {
        TheString.push_back(temp);
    }
    if (IsPalindrome(TheString)) cout <<"\nThe string so enetered is palindrome.";
    else cout <<"\nThe string so enetered is not palindrome.";
    return 0;
}