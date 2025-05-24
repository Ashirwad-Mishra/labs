#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    int count = 0;
    
    for (int i = 2 ; i <= n ; i ++)
    {
        int f= 0;
        for (int j = 2 ; j < i ; j++)
        {
            if (i%j == 0 )
            {
                f++;
                break;
            }
        }
        if (f==0)
        {
            count ++;
        }
    }
    cout << count ;
}