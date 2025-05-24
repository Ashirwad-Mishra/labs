#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <pair < int , string>>v;
    v.push_back({1,"Amit"});
    v.push_back({2,"Ajit"});
    v.push_back({3,"Arpit"});
    v.push_back({4,"Bheem"});
    v.push_back({5,"Chetan"});
    v.push_back({6,"Dhairya"});
    v.push_back({7,"Ankur"});
    v.push_back({8,"Gola"});
    for (auto i : v)
    {
        cout << i.first << endl << i.second << endl;
    }
}