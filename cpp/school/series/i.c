#include <stdio.h>
int main()
{
    int n = 10;
    int sum = 1;
    int fact = 1;
    int x = 1;
    int sign = -1;
    for (int i = 1 ; i <= 2*n ; i+=2)
    {
        x*=5*5;
        sum += sign*x/fact;
        fact *= 2*i *(2*i-1);
        sign *= -1;
    }
    printf("The sum = %d",sum);
}