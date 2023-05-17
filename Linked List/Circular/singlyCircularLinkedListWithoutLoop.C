/*
.
.
singly circular linked list without loop
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

    // 1st node
    newnode = (struct node *)malloc(sizeof(struct node));
    temp = newnode;
    head = temp;
    printf("Enter Data : ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    // 2nd node
    newnode = (struct node *)malloc(sizeof(struct node));
    temp->next = newnode;
    temp = newnode;
    printf("Enter Data : ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    // 3rd node
    newnode = (struct node *)malloc(sizeof(struct node));
    temp->next = newnode;
    temp = newnode;
    printf("Enter Data : ");
    scanf("%d", &temp->data);
    temp->next = head;

    temp = temp->next;
    printf("%d  ", temp->data);
    temp = temp->next;
    printf("%d  ", temp->data);
    temp = temp->next;
    printf("%d  ", temp->data);
    return 0;
}