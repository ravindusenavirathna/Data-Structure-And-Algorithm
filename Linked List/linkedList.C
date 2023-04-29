/*
.
.
linked list implementation without loop with user input
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
    struct node *head = NULL, *newnode, *temp;
    int n;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data : ");
    scanf("%d", &n);
    temp = newnode;
    temp->data = n;
    head = temp;
    temp->next = NULL;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data : ");
    scanf("%d", &n);
    temp->next = newnode;
    temp = newnode;
    temp->data = n;
    temp->next = NULL;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data : ");
    scanf("%d", &n);
    temp->next = newnode;
    temp = newnode;
    temp->data = n;
    temp->next = NULL;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data : ");
    scanf("%d", &n);
    temp->next = newnode;
    temp = newnode;
    temp->data = n;
    temp->next = NULL;

    temp = head;
    printf("%d  ", temp->data);
    temp = temp->next;
    printf("%d  ", temp->data);
    temp = temp->next;
    printf("%d  ", temp->data);
    temp = temp->next;
    printf("%d  ", temp->data);
}