#include <stdio.h>
int const n = 10;
int stack[n];
int top = -1;

void display()
{
    if (top == -1)
        printf("The stack is empty.\n");
    else 
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d  ", stack[i]);
        }
        printf("\n");
    }
}

void push()
{
    if (top >= n-1)
        printf("\nStack Overflow.\n");
    else 
    {
        int x;
        printf("\nEnter the element to push: ");
        scanf("%d", &x);
        top += 1;  
        stack[top] = x;
        printf("\n%d pushed into the stack.\n", x);
    }
}

void pop()
{
    if (top < 0)
        printf("\nStack Underflow.\n");
    else 
    {
        printf("\n%d popped from the stack.\n", stack[top]);
        top -= 1;
    }
}

void rev()
{
    if (top == -1)
        printf("The stack is empty, nothing to reverse.\n");
    else 
    {
        for (int i = 0, j = top; i < j; i++, j--)  
        {
            int temp = stack[i];
            stack[i] = stack[j];
            stack[j] = temp;
        }
        printf("\nThe stack has been reversed.\n");
    }
}

int main() {
    int choice;
    
    do {
        printf("\nMenu:\n1. Push\n2. Pop\n3. Display\n4. Reverse\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                rev();
                break;
            case 5:
                printf("\nExiting......\n");
                break;
            default:
                printf("\nInvalid choice, try again.\n");
        }
    } while (choice != 5);
    
    return 0;
}
