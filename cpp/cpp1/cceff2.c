#include <stdio.h>
int greatest(int a,int b,int c)
{
    if (a>b)
    {
        if (a>c) return a;
        else return c;
    }
    else 
    {
        if (b>c) return b;
        else return c;
    }
}

int main()
{
    int x, y, z;
    printf ("Enter 3 numbers: ");
    scanf ("%d%d%d",&x, &y,&z);
    printf ("The maximum= %d",greatest(x,y,z));
}