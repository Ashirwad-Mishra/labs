#include<stdio.h>
#include<stdbool.h>
#define Max 100
int queue[Max];
int front = -1;
int rear = -1;
bool IsFull()
{
    return rear >= Max-1;
}
bool isEmpty()
{
    return rear == -1;
}
void delFront()
{
    if(isEmpty())
    {
        printf("\nNothing to delete, here.........");
    }
    else
    {
        printf("%d is deleted from the queue.",queue[front]);
        front++;
    }
}
void delRear()
{
    if(isEmpty())
    {
        printf("\nNothing to delete, here.........");
    }
    else
    {
        printf("%d is deleted from the queue.",queue[rear]);
        rear--;
    }
}
void enQueue(int n)
{
    if (!IsFull())
    {
        
    }
}