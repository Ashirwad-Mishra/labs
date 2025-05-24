#include <stdio.h>
int rev(int x,int s)
{
    if (x==0) return s;
    else return rev (x/10,s*10+x%10);
}
int main()
{
    int n;
    printf ("Enter a no: ");
    scanf ("%d",&n);
    printf ("\n%d",rev(n,0));

}