#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <vector <int>>v;
    vector <int> temp;
    temp.push_back(1);
    temp.push_back(2);
    temp.push_back(3);
    v.push_back(temp);
    temp.clear();
    temp.push_back(4);
    temp.push_back(5);
    v.push_back(temp);
    temp.clear();
    temp.push_back(6);
    temp.push_back(7);
    temp.push_back(8);
    temp.push_back(9);
    v.push_back(temp);
    temp.clear();
    temp.push_back(10);
    temp.push_back(11);
    v.push_back(temp);
    temp.clear();
    for (int i = 0 ; i< v.size();i++)
    {
        for (int j =0 ; j < v[i].size();j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}