#include <stdio.h>
int main()
{
    int n = 10;
    int sum = 0;
    // int sign = 1;
    int fact= 1;
    for (int i = 1 ; i <= n ; i++)
    {
        fact *= i;
        sum += fact;
        // sign *= -1;
        
    }
    printf("The sum = %d",sum);
}