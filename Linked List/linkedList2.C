#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL, *newnode, *temp;

void print()
{
    temp = head;
    while (temp != NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}

void create()
{
    int n, choice = 1;

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
        scanf("%d", &n);
        temp->data = n;
        temp->next = NULL;

        printf("Continue? ");
        scanf("%d", &choice);
    }
    print();
}

void insertion()
{
    temp = head;
    struct node *prev;
    int val, pos, i = 1;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Value and Position : ");
    scanf("%d%d", &val, &pos);
    newnode->data = val;
    while (i < pos)
    {
        if (i == pos - 1)
            prev = temp;
        temp = temp->next;
        i++;
    }

    if (pos == 1)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        newnode->next = temp;
        prev->next = newnode;
    }
    print();
}

void deletion()
{
    temp = head;
    struct node *prev;
    int pos, i = 1;
    printf("Enter the Position : ");
    scanf("%d", &pos);
    while (i < pos)
    {
        if (i == pos - 1)
            prev = temp;
        temp = temp->next;
        i++;
    }

    if (pos == 1)
        head = temp->next;
    else
        prev->next = temp->next;
    print();
}

void search()
{
    temp = head;
    int val, pos = 0, i = 0;
    printf("Enter Value : ");
    scanf("%d", &val);
    while (temp != NULL)
    {
        i++;
        if (temp->data == val)
        {
            pos = i;
            break;
        }
        temp = temp->next;
    }

    if (pos == 0)
        printf("Value Doesn't exist.");
    else
        printf("Value position : %d", pos);
}

int main()
{
    create();
    printf("\n");
    insertion();
    printf("\n");
    deletion();
    printf("\n");
    search();
}