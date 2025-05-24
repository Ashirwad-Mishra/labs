#include<bits/stdc++.h>
using namespace std;
const int m = 100;
int stck[m];
int top = -1;
void display()
{
    if (top == -1)
    {
        cout << "\nStack Underflow";
    }
    else
    {
        cout << "\nThe stack is : ";
        for (int i = top ; i >= 0 ; i-- )
        {
            cout << stck[i] << " ";
        }
    }
}
void push(int n)
{
    if ( top >= m - 1)
    {
        cout << "\nStack OverFlow";
    }
    else
    {
        top += 1;
        stck[top] = n;
        cout << "\n" << n << " is pushed into the Stack.";
    }
}
int pop()
{
    if ( top == -1)
    {
        cout << "\nStack UnderFlow";
        return -1;
    }
    else
    {
        int poppedElement = stck[top];
        cout << "\n" << stck[top] << " is popped from the stack.";
        top -= 1;
        return poppedElement;
    }
}
int postFixCalculator(string s)
{
    for (int i = 0 ; s[i] != '\0' ; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            push(s[i] - '0');
        }
        else
        {
            int num1 = pop();
            int num2 = pop(); 
            switch (s[i])
            {
            case '+':
                {
                    push(num2 + num1);
                    break;
                }
            case '-':
                {
                    push(num2 - num1);
                    break;
                }
            case '*':
                {
                    push(num2 * num1);
                    break;
                }
            case '/':
                {
                    push(num2 / num1);
                    break;
                }
            case '%':
                {
                    push(num2 % num1);
                    break;
                }
            }
        }
    }
    return pop();
}
int main()
{
    string expression;
    cout << "Enter the postfix expression: ";
    getline(cin , expression);
    cout << postFixCalculator(expression);
}