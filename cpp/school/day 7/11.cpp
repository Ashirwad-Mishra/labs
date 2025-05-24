//Program to remove whitespace from the beginning, end, or both beginning and end, of a string
#include<bits/stdc++.h>
using namespace std;
void RemoveWhiteSpaceFromBeginning(vector<char> &myString)
{
    while (*myString.begin() ==' ')
    {
        myString.erase(myString.begin());
    }
}
void RemoveWhiteSpaceFromEnd(vector<char> &myString)
{
    while (*myString.end() ==' ')
    {
        myString.erase(myString.end());
    }
}
int main()
{
    vector <char> myString;
    cout <<"Enter your string: ";
    char temp;
    while (cin.get(temp) && temp != '\n')
    {
        myString.push_back(temp);
    }
    while(true){
    cout << "\nEnter 1 for removing white spaces from beginning.\nEnter 2 for removing white spaces from end.\nEnter 3 for removing white spaces from both end.\nEnter 4 for displaying.\nEnter 5 for exiting\n";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        RemoveWhiteSpaceFromBeginning(myString);
        break;
    case 2:
        RemoveWhiteSpaceFromEnd(myString);
        break;
    case 3:
        RemoveWhiteSpaceFromBeginning(myString);
        RemoveWhiteSpaceFromEnd(myString);
        break;
    case 4:
        cout <<"\nYou new string: ";
        for (char c : myString)
        {
            cout << c;
        }
        break;
    case 5:
        cout << "\n.............Exiting.............";
        return 0;
    default: cout << "\nEnter the proper choice next time.";
        break;
    }}
}