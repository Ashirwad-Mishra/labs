#include <stdio.h>
// tail recurssion
int facto(int n , int f)
{
    if (n==1) return f;
    else return facto (n-1,n*f);
}
int fact (int x)
{
    return facto (x,1);
}
void main()
{
    int a;
    printf ("Enter the number: ");
    scanf ("%d",&a);
    printf ("\nThe factorial of %d is %d.",a,fact(a));
}
