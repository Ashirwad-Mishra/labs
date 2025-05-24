#include <stdio.h>
int hcf(int x,int y)
{
    if (x%y==0) return y;
    else return hcf(y,x%y);
}
void main()
{
    int x,y;
    printf("Enter 2 numbers: ");
    scanf ("%d%d",&x,&y);
    printf ("The HCF of %d and %d is %d.",x,y,hcf(x,y));
}