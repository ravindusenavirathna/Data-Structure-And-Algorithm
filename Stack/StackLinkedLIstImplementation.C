/*
.
.
implement stack using linked list
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
} *top = NULL;

void push()
{
    int data;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data : ");
    scanf("%d", &data);
    newnode->data = data;
    newnode->next = top;
    top = newnode;
}

void pop()
{
    if (top == NULL)
        printf("Stack Underflow\n");
    else
    {
        printf("Deleted element : %d\n", top->data);
        top = top->next;
    }
}

void peek()
{
    if (top == NULL)
        printf("Stack is empty\n");
    else
        printf("Top element : %d\n", top->data);
}

void display()
{
    if (top == NULL)
        printf("Stack is empty\n");
    else
    {
        struct node *temp = top;
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
    printf("Enter the Operation you want to perform: \n1. Push \n2. Pop \n3. Peek \n4. Display \n5. Exit \n");
    while (choice != 5)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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