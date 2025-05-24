#include <stdio.h>
void TOH(int n, char A, char B , char C)
{
    if (n==1)
    {
        printf("\nMove Disc 1 from %c to %c.",A,C);
        return;
    }

    TOH(n-1, A, C, B);
    printf ("\nMove disc %d from %c to %c.",n,A,C);
    TOH (n-1,B,A,C);
}
void main()
{
    int a = 3;
    char x = 'A';
    char y = 'B';
    char z = 'C';
    TOH(a,x,y,z);
}