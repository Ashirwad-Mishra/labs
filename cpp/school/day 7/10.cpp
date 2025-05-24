//Program for character by character frequency count
#include<bits/stdc++.h>
using namespace std;
int countCharacter(char c, vector<char> myStr)
{
    int count = 0;
    for (char temp : myStr)
    {
        if (temp == c)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    map <char , int> CFM;
    vector <char> YourString;
    cout <<"Enter your string: ";
    char temp;
    while(cin.get(temp) && temp != '\n')
    {
        YourString.push_back(temp);
    }
    for (char c : YourString)
    {
        if (CFM.find(c) == CFM.end())
        {
            CFM.insert(make_pair(c,countCharacter(c,YourString)));
        }
    }
    cout << "\nHere is the character with there frequency: \n";
    for (const auto &pair : CFM) 
    {
        cout <<"\"" << pair.first <<"\""<<" occurs "<< " " <<"\""<< pair.second <<"\""<<" times."<< endl;
    }
}