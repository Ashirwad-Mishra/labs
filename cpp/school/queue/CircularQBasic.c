#include<stdio.h>
#include<stdbool.h>
#define Max 10

int queue[Max];
int front = -1;
int rear = -1;

bool isEmpty() {
    return (front == -1 && rear == -1);
}

bool isFull() {
    return (rear + 1) % Max == front;
}

int enqueue(int n) {
    if (isFull())
    {
        printf("\nThe queue is full.");
        return -1;
    }
    else if (isEmpty())
    {
        front = 0;
    }
    rear = (rear + 1) % Max;
    queue[rear] = n;
    printf("%d is enqueued.", n);
    return n;
}

int dequeue()
{
    if (isEmpty())
    {
        printf("\nThe queue is Empty.");
        return -1;
    }
    else if (front == rear)
    {
        printf("\nThe %d is dequeued.", queue[front]);
        front = -1;
        rear = -1;
    } else {
        printf("\nThe %d is dequeued.", queue[front]);
        front = (front + 1) % Max;
    }
}

void display()
{
    if (isEmpty())
    {
        printf("\nThe queue is empty.");
    }
    else
    {
        printf("\nThe Queue is: ");
        int i = front;
        while (i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % Max;
        }
        printf("%d ", queue[rear]);
    }
}

int main()
{
    while (true)
    {
        printf("\nEnter 1 for enqueueing.\nEnter 2 for dequeueing.\nEnter 3 for displaying.\nEnter 4 for checking if the queue is full.\nEnter 5 for checking if the queue is empty.\nEnter 6 for exiting.\n");
        int n;
        scanf("%d", &n);
        switch (n)
        {
            case 1:
            {
                int temp;
                printf("\nEnter the number: ");
                scanf("%d", &temp);
                enqueue(temp);
                break;
            }
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                isFull() ? printf("\nThe queue is full") : printf("\nThe queue is not full.");
                break;
            case 5:
                isEmpty() ? printf("\nThe queue is empty") : printf("\nThe queue is not empty.");
                break;
            case 6:
                printf("\nExiting.....................");
                return 0;
            default:
                printf("\nEnter a valid option.");
                break;
        }
    }
}