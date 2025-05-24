#include <stdio.h>
void main()
{
    int a , b , c;
    printf ("Enter the sides of triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c&&b+c>a&&a+c>b && a > b-c && b > c-a && c > a - b)
    {
        if (a==b )
        {
            if (a==c) printf("\nThe triangle is equilateral.");
            else printf("\nThe triangle is isoscales.");
        }
        

        else if (a==c)
        {
            if (a==b) printf("\nThe triangle is equilateral.");
            else printf("\nThe triangle is isoscales.");
        }

        if (b == c )
        {
            if (b==a) printf("\nThe triangle is equilateral.");
            else printf("\nThe triangle is isoscales.");
        }
        else printf("\nThe triangle is scalene.");
    }

    else printf("\nThe sides are not of proper triangle.");
}