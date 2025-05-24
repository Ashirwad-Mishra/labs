#include<stdio.h>
int fib(int n,int temp)
{
    if (n==0)
    {
        return temp;
    }
    else
    {
        return n-1 + n-2 + fib(n-3,);
    }
}