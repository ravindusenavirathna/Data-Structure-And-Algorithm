/*
.
.
linked list implementation with loop
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
    struct node *new_node, *head = NULL, *temp;
    int n, i = 0;
    printf("How many node in Linked List ? ");
    scanf("%d", &n);
    while (i < n)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        if (head == NULL)
        {
            temp = new_node;
            head = temp;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
        printf("Enter Data : ");
        scanf("%d", &temp->data);
        i++;
    }
    temp->next = NULL;
    temp = head;
    while (temp != NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    return 0;
}