#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 100 
char stack[MAX];
int top = -1;
void push(char ch)
{
    if (top >= MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top += 1;
        stack[top] = ch;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        top -= 1;
    }
}
bool Arepair(char opening, char closing)
{
    if (opening == '(' && closing == ')')
        return true;
    else if (opening == '{' && closing == '}')
        return true;
    else if (opening == '[' && closing == ']')
        return true;
    else
        return false;
}
bool AreParenthesBalanced(char exp[])
{
    for (int i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (top == -1 || !Arepair(stack[top], exp[i]))
            {
                return false;
            }
            else
            {
                pop(); 
            }
        }
    }
    return top == -1;
}

int main()
{
    char expression[MAX];
    printf("Enter an expression: ");
    scanf("%s", expression); 

    if (AreParenthesBalanced(expression))
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
}
