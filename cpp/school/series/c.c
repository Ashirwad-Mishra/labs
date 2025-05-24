#include <stdio.h>
int main()
{
    int n = 10;
    int sum = 0;
    int sign = 1;
    for (int i = 1 ; i <= n ; i++)
    {
        sum += i*i*sign;
        sign *= -1;
    }
    printf("The sum = %d",sum);
}