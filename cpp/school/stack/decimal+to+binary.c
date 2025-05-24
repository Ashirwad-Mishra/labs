#include<stdio.h>
# define max 100
int stack[max];
int top = -1;
void push(int x)
{
    if (top >= max-1)
    {
        printf("\nStack Overflow");
    }
    else 
    {
        top +=1;
        stack[top] = x;
        printf("\n%d pushed in to the stack.",x);
    }
}
void pop()
{
    if (top <= -1 )
    {
        printf("\nStack Underflow.");
    }
    else
    {
        top -= 1;
    }
}
void DecToBin(int x)
{
    while(x!=0)
    {
        push(x%2);
        x/=2;
    }
}
void display_stack()
{
    for (int i = 0 ; top != -1 ; i++)
    {
        printf("%d ",stack[i]);
        pop();
    }
}
int main()
{
    int n;
    printf("Enter the decimal number: ");
    scanf("%d",&n);
    DecToBin(n);
    printf("\nThe binary of %d is : ",n);
    display_stack();
}