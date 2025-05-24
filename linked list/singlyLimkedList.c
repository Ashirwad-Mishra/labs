#include<stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node ;
void AddAtBegin(node ** head, int newData)
{
    node *new = (node *) malloc (sizeof(node));
    new ->data = newData;
    new ->next = *head;
    *head = new;
}
void AddAtEnd( node ** head , int newdata)
{
    node *new = (node *) malloc (sizeof(node));
    new ->data = newdata;
    new -> next = NULL;
    if (*head == NULL)
    {
        *head = new;
    } 
    else
    {
        node *last = *head;
        while (last->next != NULL)
        {
            last = last ->next;
        }
        last ->next = new;
    }
}