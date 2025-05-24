#include <stdio.h>
int main()
{
    int n = 10;
    int sum = 0;
    for (int i = 1 ; i <= 2*n ; i+=1)
    {
        sum+=i*(i+1)*(i+2);
    }
    printf("The sum = %d",sum);
}