#include <stdio.h>
int main()
{
    int n = 10;
    int sign = -1;
    int sum = 0;
    for (int i = 0 ; i <= n ; i++)
    {
        sum += i*sign;
        sign*=-1;
    }
    printf("The Sum = %d",sum);
}