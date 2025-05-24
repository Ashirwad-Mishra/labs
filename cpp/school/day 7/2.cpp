//Program for reversing the given string (User defined function)
#include<bits/stdc++.h>
using namespace std;
void ReverString(vector <char>& yourString)
{
    int front = 0;
    int rear = yourString.size()-1;
    while(front<rear)
    {
        char temp = yourString[front];
        yourString[front] = yourString[rear];
        yourString[rear] = yourString[front];
        front++;
        rear--;
    }
}
int main()
{
    string input;vector<char> YourString;
    char temp;
    cout << "Enter your string: ";
    while (cin.get(temp) && temp != '\n')  //It shall take the input till enter kry is pressed.
    {
        YourString.push_back(temp);
    }
    cout <<"\nThe original string: ";
    for (char c: YourString)
    {
        cout << c;
    }
    cout << "\nThe reversed string: ";
    ReverString(YourString);
    for (char c : YourString)
    {
        cout << c;
    }
}