#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define max 100
int top = -1;
int stack[max];
void push(int n)
{
    if (top>=max+1)
    {
        printf("\nStack Overflow");
    }
    else 
    {
        top += 1;
        stack[top] = n;
        printf("\n%d pushed in to the stack.",n);
    }
}
int pop()
{
    if (top<=-1)
    {
        printf("\nStack Underflow");
    }
    else 
    {
        top -= 1;
        printf("\n%d popped from the stack.",stack[top]);
    }
}
bool IsPallindrome(int stack[])
{
    int start = 0;
    int end = top;
    while (start<=end)
    {
        if (stack[start]!=stack[end])
        {
            return false;
        }
        start ++;
        end --;
    }
    return true;
}
int main()
{
    int n ; 
    printf("Enter the number: ");
    scanf("%d",&n);
    do
    {
        push(n%10);
        n/=10;
    } while (n>0);
    if (IsPallindrome(stack))
    {
        printf("\nYes! it is pallindrome.");
    }
    else printf("\nNope! it is not pallindrome.");
    
}