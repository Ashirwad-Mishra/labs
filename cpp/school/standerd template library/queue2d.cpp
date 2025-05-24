#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<pair<string, int>> q;

    q.push({"Amit", 2});
    q.push({"Sohan", 3});
    q.push({"Mohan", 4});
    q.push({"Dinesh", 5});
    q.push({"Rohit", 6});
    q.push({"Mohit", 7});
    q.push({"Bholoo", 8});
    q.push({"Bhalu", 9});
    q.push({"Kalu", 10});
    q.push({"Shalu", 11});

    while (!q.empty())
    {
        cout << "(" << q.front().first << ", " << q.front().second << ") " << endl;
        q.pop();
    }

    return 0;
}
