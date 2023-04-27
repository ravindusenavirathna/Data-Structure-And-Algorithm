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
    int n, i = 0;
    printf("How many node in Linked List ? ");
    scanf("%d", &n);
    while (i < n)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        if (head == 0)
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
    temp->next = 0;
    temp = head;
    while (temp != 0)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    return 0;
}