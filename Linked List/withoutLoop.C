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
    // 1st node (head)
    new_node = (struct node *)malloc(sizeof(struct node));
    temp = new_node;
    head = temp;
    printf("Enter Data : ");
    scanf("%d", &temp->data);
    // 2nd node
    new_node = (struct node *)malloc(sizeof(struct node));
    temp->next = new_node;
    temp = new_node;
    printf("Enter Data : ");
    scanf("%d", &temp->data);
    // 3rd node
    new_node = (struct node *)malloc(sizeof(struct node));
    temp->next = new_node;
    temp = new_node;
    printf("Enter Data : ");
    scanf("%d", &temp->data);

    temp = head;
    printf("%d  ", temp->data);
    temp = temp->next;
    printf("%d  ", temp->data);
    temp = temp->next;
    printf("%d  ", temp->data);
    return 0;
}
