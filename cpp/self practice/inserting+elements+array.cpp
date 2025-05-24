#include <iostream>
using namespace std;
int main()
{
    int n, A[100],m;
    cout << "Enter the number of elements in array A: ";
    cin >> n;
    for (int i = 0; i<n;i++)
    {
        cin >> A[i];
    }

    cout << endl << "Enter the number of elements to be inserted: ";
    cin >> m;

    int index;
    cout << endl << "Ender the index at which you want to insert: ";
    cin >> index;

    int i = n-1;
    while (i >= index)
    {
        A[i+index] = A[i];
        i--;
    }

    cout << endl << "Enter the numbers to be inserted: ";
    for (int i = index; i<index + m ; i++)
    {
        cin >> A[i];
    }

    cout << endl << "The needed array: ";
    for (int i =0 ; i < n+m; i++)
    {
        cout << A[i] << "  ";
    }


}