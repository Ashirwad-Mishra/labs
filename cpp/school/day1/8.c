#include <stdio.h>
int main()
{
    int x,y;
    printf ("Enter the cordinates: ");
    scanf ("%d%d",&x,&y);
    if (x>0&&y>0) printf ("%d , %d lies in 1st quadrant.",x,y);
    else if (x<0&&y>0) printf ("%d , %d lies in 2nd quadrant.",x,y);
    else if (x<0&&y<0) printf ("%d , %d lies in 3rd quadrant.",x,y);
    else if (x>0&&y<0) printf ("%d , %d lies in 4th quadrant.",x,y);
}