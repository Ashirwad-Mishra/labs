#include <stdio.h>

void main()
{
    char ch;
    for (int i = 0; i < 5; i++)
    {
        ch = 'E' - i; 
        for (int j = 0; j <= i; j++)
        {
            printf("%c", ch);
            ch--; 
        }
        printf("\n");
    }
}