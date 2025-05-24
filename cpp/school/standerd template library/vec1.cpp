#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(10);
    cout << v.size() <<" " <<v.capacity() <<endl;
    v.push_back(20);
    cout << v.size() <<" " <<v.capacity() <<endl;
    v.push_back(30);
    cout << v.size() <<" " <<v.capacity() <<endl;
    v.push_back(40);
    cout << v.size() <<" " <<v.capacity() <<endl;
    v.push_back(50);
    cout << v.size() <<" " <<v.capacity() <<endl;
    v.push_back(60);
    cout << v.size() <<" " <<v.capacity() <<endl;
    for (auto i : v)
    {
        cout << i << endl;
    }
}