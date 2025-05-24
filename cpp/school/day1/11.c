#include <stdio.h>
int main()
{
    int y1 , y2;
    printf ("Enter the years: ");
    scanf ("%d%d",&y1,&y2);
    int count = 0;
    for (int i = y1;i<=y2;i++)
    {
        if ((i%100==0 && i%400==0) || (i%100!=0 && i%4==0)) count ++;
    }
    printf ("Total leap years: %d",count);
}