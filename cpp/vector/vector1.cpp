#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;
    cout << v.size() << endl;
    int n;
    for (int i = 0 ; i < 5 ; i ++)
    {
        cin >> n;
        v.push_back(n);
    }
    cout << v.size() << endl;
}