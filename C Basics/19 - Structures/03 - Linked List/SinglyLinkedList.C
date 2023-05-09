#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int x;
    struct node *next;
} node;
struct node *head = 0, *newnode, *temp;

int main()
{
    int choice = 1;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->x);
        newnode->next = 0;
        if (head == 0)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue(0/1) :");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->x);
        temp = temp->next;
    }

    return 0;
}
