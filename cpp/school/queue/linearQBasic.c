#include<stdio.h>
#include<stdbool.h>
#define max 100

int queue[max];
int rear = -1;
int front = -1;

bool isFull() {
    return rear >= max - 1;
}

bool isEmpty() {
    return (rear == -1 || front > rear);
}

void enqueue(int n) {
    if (isFull()) {
        printf("\nQueue Overflow.");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = n;
        printf("%d is enqueued.", n);
    }
}

void dequeue() {
    if (isEmpty()) {
        printf("\nQueue Underflow.");
    } else {
        printf("\n%d deQueued successfully.", queue[front]);
        front++;
        // Reset the queue if it becomes empty
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void display() {
    if (isEmpty()) {
        printf("\nThe Queue is empty.");
    } else {
        printf("\nThe members of the Queue are: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    }
}

int main() {
    while (true) {
        printf("\nEnter 1 for enqueueing.\nEnter 2 for dequeueing.\nEnter 3 for displaying.\nEnter 4 for checking if the queue is full.\nEnter 5 for checking if the queue is empty.\nEnter 6 for exiting.\n");
        int n;
        scanf("%d", &n);
        switch (n) {
            case 1: {
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
                return 0;
            default:
                printf("\nEnter a valid option.");
                break;
        }
    }
}
