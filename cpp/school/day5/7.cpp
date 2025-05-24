//Reverse the elements of an Array. That is, first element should become last and last should come at first place.
#include <bits/stdc++.h>
using namespace std;
void RevVector(vector <int> &vec)
{
    for (int i = 0 , j = vec.size()-1 ; i<j ; i++ , j--)
    {
        swap(vec[i],vec[j]);
    }
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n ;
    vector <int> vec;
    cout << "Enter the array: ";
    for (int i = 0 ; i< n ; i++)
    {
        int t ; 
        cin >> t ;
        vec.push_back(t); 
    }
    RevVector(vec);
    cout << "\nThe reversed array: ";
    for (int t : vec)
    {
        cout << t << " ";
    }
}