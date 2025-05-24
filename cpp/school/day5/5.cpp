//You have been given an integer value N. Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,7.......8,6,4,2.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> answer;
    vector <int> temp;
    int n;
    cout << "Enter the number: ";
    cin >> n ;
    for (int i = 1 ; i <= n ; i++)
    {
        if (i%2!=0)
        {
            answer.push_back(i);
        }
        else temp.push_back(i);
    }
    for (int c = temp.size()-1 ; c >= 0 ; c--)
    {
        answer.push_back(temp[c]);
    }
    cout << "\nThe Answer: ";
    for (int t : answer)
    {
        cout << t << " ";
    }
}