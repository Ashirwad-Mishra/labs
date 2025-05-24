#include <stdio.h>
int fact(int n)
{
    if (n==1) return 1;
    else return n*fact(n-1);
}
void main()
{
    int x;
    printf ("Enter the no: ");
    scanf ("%d",&x);
    printf ("The factorial of %d is %d.",x,fact(x));
}