#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int const max = 100;
char stack[max];
int top = -1;
void push(int n)
{
    if (top <= -1)
    {
        printf ("\nStack Underflow.");
    }
    else 
    {
        top+=1;
        stack[top] = n;
        printf("\n%d pushed in to the stack.",stack[top]);
    }
}
char pop()
{
    if (top>=max-1)
    {
        printf ("\nStack Overflow.");
        return;
    }
    else 
    {
        char poppedValue=stack[top];
        printf("\n%d pushed in to the stack.",stack[top]);
        top-=1;
        return poppedValue;
    }
}
void display(char A[])
{
    for (int i=top;top>-1;i--)
    {
        printf("\nA[i]",pop());
    }
}
bool isOperator(char c)
{
    return (c=='+'||c=='-'||c=='*'||c=='/'||c=='^');
}
int evaluate(int var1,int var2,char op)
{
    switch (op)
    {
    case '+':
        return var1+var2;
        break;
    case '-':
        return var1-var2;
        break;
    case '*':
        return var1*var2;
        break;
    case '/':
        return var1/var2;
        break;
    case '^':
        return pow(var1,var2);
        break;
    
    default:
        return 0;
        break;
    }
}