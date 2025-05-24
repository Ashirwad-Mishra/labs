#include <stdio.h>
int power(int b,int n)
{
    if (n==0) return 1;
    else if (n>0) return b*power(b,n-1);
    
}
void main()
{
    int x,y;
    printf("Enter the base and power: ");
    scanf ("%d%d",&x,&y);
    printf("%d raised to the power %d is %d",x,y,power(x,y));
}