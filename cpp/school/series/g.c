#include <stdio.h>
int main()
{
    int n = 10;
    int sum = 0;
    int fact = 1;
    int x = 1;
    for (int i = 1 ; i <= n ; i++)
    {
        x*=5;
        sum += x/fact;
        fact *= i;
    }
    printf("The sum = %d",sum);
}