#include <iostream>
int main()
{
    int A[7] = {34,78,98,32,12,25,70}; int i;
    int key = 12;
    for (i = 0 ; i<7 ; i++)
    {
        if (key == A[i]) break;

    }
   std :: cout << i;

}