#include <stdio.h>
int DAT[100];
int fib(int n)
{
    if (n==1||n==2) return DAT[n] = n-1;
    else 
   { if(DAT[n]==0)
    return DAT[n] = (fib(n-1) + fib (n-2));}
    
    return DAT[n];
}
void main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);
    printf ("\nThe fibbonacci series: ");
    for (int i = 1;i<=n;i++)
    {
        printf ("%d ",fib(i));
    }
}