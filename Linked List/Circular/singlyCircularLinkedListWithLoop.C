/*
.
.
singly circular linked list with loop
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
};

int main()
{
    struct node *newnode, *head = NULL, *temp;
    int choice;
    while (choice != 0)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (head == NULL)
        {
            temp = newnode;
            head = temp;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Enter Data : ");
        scanf("%d", &temp->data);
        temp->next = NULL;

        printf("Continue? ");
        scanf("%d", &choice);
    }
    temp->next = head;

    return 0;
}