/*
.
.
doubly linked list with loop
©尺乙尺 2023
.
.
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

int main()
{
    struct node *newnode, *head = NULL, *temp, *end;
    int choice = 1;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (head == NULL)
        {
            temp = newnode;
            temp->prev = NULL;
            head = temp;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("Enter data : ");
        scanf("%d", &temp->data);
        temp->next = NULL;

        printf("Continue ? ");
        scanf("%d", &choice);
    }

    // print forward
    printf("\nPrint forward : ");
    temp = head;
    while (temp != NULL)
    {
        printf("%d  ", temp->data);
        end = temp;
        temp = temp->next;
    }

    // print reverse
    printf("\nprint reverse : ");
    temp = end;
    while (temp != NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->prev;
    }

    return 0;
}