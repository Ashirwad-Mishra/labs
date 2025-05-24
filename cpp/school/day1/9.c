#include <stdio.h>
int main()
{
    int n;
    float cost;
    printf("Enter the unit of electricity consumed: ");
    scanf ("%d",&n);
    if (n>600) cost = (((n-600)*8 + 200*15))*1.05 + 220; 
    else if (n>400) cost = (((n-400)*7 + 200*8))*1.05 + 220;
    else if (n>200) cost = (((n-200)*2 + 200*0))*1.05 + 220;
    else cost = 220;
    printf ("Your total electric bill = %.2f",cost);
}