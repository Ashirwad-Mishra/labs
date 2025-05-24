#include <bits/stdc++.h>
using namespace std;

bool compareString(const string &str1, const string &str2) 
{
    return str1 < str2;
}

void DictionaryOrder(vector<string>& UnDicted) 
{
    for (int i = 0; i < UnDicted.size(); i++) 
    {
        for (int j = 0; j < UnDicted.size() - i - 1; j++) 
        {
            if (compareString(UnDicted[j+1], UnDicted[j])) 
            {
                swap(UnDicted[j], UnDicted[j+1]);
            }
        }
    }
}

int main()
{
    vector<string> Cities;
    string temp;
    cout << "Enter your cities names (press Enter to finish): ";

    while (true)
    {
        getline(cin, temp);
        if (temp.empty()) break;
        Cities.push_back(temp);
    }

    DictionaryOrder(Cities);

    cout << "\nHere are your cities in dictionary order: \n";
    for (const auto& city : Cities)
    {
        cout << city << endl;
    }

    return 0;
}
