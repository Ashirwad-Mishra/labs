#include <bits/stdc++.h>
#define max 100
char stack[max];
int top = -1;
void push(char ch)
{
    if (top>=max-1)
    {
        printf("\nStack Overflow.");
    }
    else 
    {
        top+=1;
        stack[top]=ch;
    }
}
void pop()
{
    if (top == -1)
    {
        std::cout <<"Stack underflow\n";
    }
    else
    {
        top-=1;
    }
}
bool arePair(char opening,char closing)
{
    if (opening=='(' && closing == ')')
    {
        return true;
    }
    else if (opening=='[' && closing == ']')
    {
        return true;
    }
    else if (opening=='{' && closing == '}')
    {
        return true;
    }
    else return false;
}
bool AreBracketsBalanced(char exp[])
{
    for (int i = 0 ; i < strlen(exp) ; i++)
    {
        if ( exp[i] == '[' || exp[i]=='{' || exp [i] =='(' )
        {
            push(exp[i]);
        }
        else if (exp[i] == ']' || exp[i] == '}' || exp[i] == ')')
        {
            if (top == -1 || !arePair(stack[top] , exp[i]))
            {
                return false;
            }
            else pop();
        }
    }
    return top == -1;
}
int main()
{
    char expression[max];
    std::cout <<"Enter your expression: ";
    scanf("%s",expression);
    if (AreBracketsBalanced(expression))
    {
        std::cout << "\nThe brackets are balanced.\n";
    }
    else std::cout << "\nThe brackets are not balanced.\n";
}