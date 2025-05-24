#include<stdio.h>
int fact(int n,int temp)
{
    if (n==1||n==0) 
    {
        return temp;
    }
    return fact(n-1,n*temp);
}
int factorial(int n)
{
    return fact (n,1);
}
int main()
{
    printf("The factorial of 7 = %d ",factorial(7));
}