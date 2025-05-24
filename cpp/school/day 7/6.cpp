#include <iostream>
#include <vector>
using namespace std;
void printVectorString(const vector<char>& str) 
{
    for (char ch : str) 
    {
        cout << ch;
    }
}
void compareString(const vector<char>& str1, const vector<char>& str2) 
{
    int len1 = str1.size();
    int len2 = str2.size();
    int minLen = min(len1, len2);
    for (int i = 0; i < minLen; i++) 
    {
        if (str1[i] > str2[i]) 
        {
            cout << "\nThe \"";
            printVectorString(str1);
            cout << "\" is a greater string.";
            return;
        } 
        else if (str1[i] < str2[i]) 
        {
            cout << "\nThe \"";
            printVectorString(str2);
            cout << "\" is a greater string.";
            return;
        }
    }
    if (len1 > len2) 
    {
        cout << "\nThe \"";
        printVectorString(str1);
        cout << "\" is a greater string.";
    } 
    else if (len2 > len1) 
    {
        cout << "\nThe \"";
        printVectorString(str2);
        cout << "\" is a greater string.";
    } 
    else 
    {
        cout << "\nThe strings are equal.";
    }
}

int main() 
{
    vector <char> str1 , str2;
    cout << "Enter your first string (The first letter of a sentences are capital): ";
    char temp;
    while(cin.get(temp) && temp != '\n')
    {
        str1.push_back(temp);
    }
    cout << "Enter your second string(The first letter of a sentences are capital): ";
    while(cin.get(temp) && temp != '\n')
    {
        str2.push_back(temp);
    }
    compareString(str1, str2);
    return 0;
}
