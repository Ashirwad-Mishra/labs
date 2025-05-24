#include<stdio.h>
int power(int n,int p,int result)
{
    if (p==0)
    {
        return result;
    }
    if (p>0)
    {
        return power(n,p-1,n*result);
    }
    if (p<0)
    {
        return power(n,p+1,result/n);
    }
}
int expo(int n , int p)
{
    return power(n,p,1);
}
int main()
{
    printf("Enter your base and exponent: ");
    int b,e;
    scanf("%d %d",&b,&e);
    printf("The %d raised to the power %d is %d.",b,e,expo(b,e));
}