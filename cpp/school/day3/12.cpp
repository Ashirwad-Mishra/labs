#include <bits/stdc++.h>
using namespace std;
int main()
{
    int value;
    for (int i = 1; i <= 8; i++)
    {
        // Print leading spaces
        for (int space = 1; space <= 8 - i; space++)
        {
            cout << " ";
        }
        value = 1; // Initialize the first value in each row to 1
        for (int j = 1; j <= i; j++)
        {
            cout << value << " ";
            // Update `value` to the next element in the row
            value = value * (i - j) / j;
        }
        cout << endl;
    }
    return 0;
}
