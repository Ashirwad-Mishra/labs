#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> A;
    int n,m;
    cout << "\nEnter the number of elements: ";
    cin >> n;
    cout << "\nEnter the elements: ";
    for (int i = 0 ; i<n ; i++)
    {
        cin >> m ;
        A.push_back(m);
    }
    sort(A.begin(),A.end());
    for (int i : A)
    {
        cout << i << endl;
    }
}