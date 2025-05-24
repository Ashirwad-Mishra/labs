//Program for Linear Linked List Primitive operations
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
}node;
void addAtBeginning (node** head ,int newData)
{
    node *newNode = (node *) malloc (sizeof(node));
    newNode ->data = newData;
    newNode -> next = *head;
    *head = newNode;
}
void addAtEnd(node** head , int newData)
{
    node *newNode = (node *) malloc(sizeof(node));
    newNode ->data = newData;
    newNode ->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        node *last = *head;
        while(last ->next != NULL)
        {
            last = last-> next;
        }
        last -> next = newNode;
    }
}
int count_of_nodes(struct node* head)
{
    int count = 0;
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr -> next;
    }
    return count;
}
void display(node** head)
{
    if (*head == NULL)
    {
        printf("\nThe list is empty.");
    }
    else
    {
        node* ptr = *head;
        printf("\nThe List is as ");
        while(ptr != NULL)
        {
            printf("%d ",ptr ->data);
            ptr = ptr-> next;
        }
        printf("\n");
    }
}
int main()
{
    node* head = NULL;
    while (1)
    {
    printf("Enter 1 to join a node in beginning.\nEnter 2 to join a node in the end.\nEnter 3 to display the list.\nEnter 4 to know the size of the list.\nEnter 5 to exit.\n");
    int option;
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        printf("\nEnter the Data: ");
        int temp;
        scanf("%d",&temp);
        addAtBeginning(&head,temp);
        break;
    case 2:
        printf("\nEnter the Data: ");
        int temp1;
        scanf("%d",&temp1);
        addAtEnd(&head,temp1);
        break;
    case 3:
        display(&head);
        break;
    case 4:
        printf("\nThe size of the list is %d.\n",count_of_nodes(head));
        break;
    case 5:
        printf("\n..........Exiting...........");
        return 0;
    default:
        printf("\nEnter the right option.");
        break;
    }
    }
}