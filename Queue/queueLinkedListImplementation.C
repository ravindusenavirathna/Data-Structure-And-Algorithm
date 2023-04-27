/*
.
.
implement queue using linked list
©尺乙尺 2023
.
.
*/

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *front = NULL, *rear = NULL;

void enqueue()
{
    int data;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &data);
    if (front == NULL && rear == NULL)
        front = newnode;
    else
        rear->next = newnode;
    rear = newnode;
    rear->data = data;
    rear->next = NULL;
}

void dequeue()
{
    if (front == NULL && rear == NULL)
        printf("Queue underflow\n");
    else if (front == rear)
    {
        printf("Deleted element : %d\n", front->data);
        printf("Queue refreshed\n");
        front = NULL;
        rear = NULL;
    }
    else
    {
        printf("Deleted element : %d\n", front->data);
        front = front->next;
    }
}

void peek()
{
    if (front == NULL && rear == NULL)
        printf("Queue is empty\n");
    else
        printf("Top element : %d\n", front->data);
}

void display()
{
    if (front == NULL && rear == NULL)
        printf("Queue is empty\n");
    else
    {
        struct node *temp = front;
        while (temp != NULL)
        {
            printf("%d  ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    int choice;
    printf("Enter the Operation you want to perform: \n1. Enqueue \n2. Dequeue \n3. Peek \n4. Display \n5. Exit \n");
    while (choice != 5)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("\nExiting the Program... \n\n");
            break;
        default:
            printf("Invalid Choice\n");
            break;
        }
    }
    return 0;
}