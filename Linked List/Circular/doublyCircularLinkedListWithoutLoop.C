/*
.
.
doubly circular linked list without loop
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
    struct node *newnode, *head = NULL, *temp;

    // 1st node
    newnode = (struct node *)malloc(sizeof(struct node));
    temp = newnode;
    temp->prev = NULL;
    temp->data = 34;
    temp->next = NULL;
    head = temp;

    // 2nd node
    newnode = (struct node *)malloc(sizeof(struct node));
    temp->next = newnode;
    newnode->prev = temp;
    temp = newnode;
    temp->data = 46;
    temp->next = NULL;

    // 3rd node
    newnode = (struct node *)malloc(sizeof(struct node));
    temp->next = newnode;
    newnode->prev = temp;
    temp = newnode;
    temp->data = 93;
    temp->next = NULL;

    // 4th node
    newnode = (struct node *)malloc(sizeof(struct node));
    temp->next = newnode;
    newnode->prev = temp;
    temp = newnode;
    temp->data = 81;
    temp->next = NULL;

    // 5th node
    newnode = (struct node *)malloc(sizeof(struct node));
    temp->next = newnode;
    newnode->prev = temp;
    temp = newnode;
    temp->data = 26;

    //* circular
    temp->next = head;
    head->prev = temp;

    temp = temp->next;
    printf("%d  ", temp->data);
    temp = temp->next;
    printf("%d  ", temp->data);
    temp = temp->next;
    printf("%d  ", temp->data);
    temp = temp->next;
    printf("%d  ", temp->data);
    temp = temp->next;
    printf("%d  ", temp->data);

    return 0;
}