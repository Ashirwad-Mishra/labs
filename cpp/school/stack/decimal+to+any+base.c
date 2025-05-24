#include<stdio.h>
#define max 100

int stack[max];
int top = -1;
void push(int x) {
    if (top >= max - 1) {
        printf("\nStack Overflow");
    } else {
        top += 1;
        stack[top] = x;
        printf("\n%d pushed into the stack.", x);
    }
}
int pop()
{
    if (top <= -1) {
        printf("\nStack Underflow.");
        return -1; 
    }
    else
    {
        int popped_value = stack[top];
        top -= 1;
        return popped_value;
    }
}
void DecToBin(int x,int b)
{
    while (x != 0)
    {
        push(x % b);
        x /= b;
    }
}
void display_stack()
{
    while (top != -1)
    {
        printf("%d ", pop());
    }
}
int main() {
    int n;
    printf("Enter the decimal number: ");
    scanf("%d", &n);
    int b;
    printf("Enter the base: ");
    scanf("%d",&b);

    DecToBin(n,b);

    printf("\nThe conversion of %d at a base of %d is: ", n,b);
    display_stack();

    return 0;
}
