#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *new_node, *head = 0, *temp;
    int insertionData, position, i = 2;

    // create
    new_node = (struct node *)malloc(sizeof(struct node));
    temp = new_node;
    head = temp;
    temp->data = 23;
    new_node = (struct node *)malloc(sizeof(struct node));
    temp->next = new_node;
    temp = new_node;
    temp->data = 78;
    new_node = (struct node *)malloc(sizeof(struct node));
    temp->next = new_node;
    temp = new_node;
    temp->data = 90;

    // Before insertion .... No. of node = 3
    printf("Before insertion\n");
    temp = head;
    printf("%d  ", temp->data);
    temp = temp->next;
    printf("%d  ", temp->data);
    temp = temp->next;
    printf("%d  ", temp->data);

    // insertion
    printf("\n\nEnter the data and position : ");
    scanf("%d%d", &insertionData, &position);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = insertionData;
    temp = head;
    while (i < position)
    {
        temp = temp->next;
        i++;
    }
    if (position == 1)
    {
        new_node->next = head;
        head = new_node;
    }
    else
    {
        new_node->next = temp->next;
        temp->next = new_node;
    }

    // After insertion .... No. of node = 4
    printf("\nAfter insertion\n");
    temp = head;
    printf("%d  ", temp->data);
    temp = temp->next;
    printf("%d  ", temp->data);
    temp = temp->next;
    printf("%d  ", temp->data);
    temp = temp->next;
    printf("%d  ", temp->data);
    return 0;
}
