#include <stdio.h>

long int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    printf("%ld", fact(7));
    return 0;
}