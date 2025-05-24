#include <stdio.h>
int main()
{
    int n = 10;
    float sum = 0;
    float sign = 1;
    float fact = 1;
    for (int i = 1 ; i <= n ; i++)
    {
        fact += i ;
        sum += i*sign/fact;
        sign *= -1;
    }
    printf("The sum = %f",sum);
}