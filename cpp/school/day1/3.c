#include <stdio.h>
void main()
{
    char x;
    printf ("Enter the character: ");
    scanf ("%c",&x);
    if (x=='A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' || x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    {
        printf ("%c is vowel.",x);
    }
    else printf ("%c is consonent.",x);
}