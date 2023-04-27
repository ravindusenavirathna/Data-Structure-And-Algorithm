/*
.
.
implement queue using array
©尺乙尺 2023
.
.
*/

#include <stdio.h>
#define N 5
int queue[N];
int front = -1, rear = -1;

void enqueue()
{
    int data;
    if (rear == N - 1)
        printf("Queue overflow\n");
    else if (rear == -1 && front == -1)
    {
        printf("Enter data : ");
        scanf("%d", &data);
        rear++;
        front++;
        queue[rear] = data;
    }
    else
    {
        printf("Enter data : ");
        scanf("%d", &data);
        rear++;
        queue[rear] = data;
    }
}

void dequeue()
{
    if (rear == -1 && front == -1)
        printf("Queue underflow\n");
    else if (rear == front)
    {
        printf("Deleted element : %d\n", queue[front]);
        printf("Queue refreshed\n");
        rear = front = -1;
    }

    else
    {
        printf("Deleted element : %d\n", queue[front]);
        front++;
    }
}

void peek()
{
    if (rear == -1 && front == -1)
        printf("Queue is empty\n");
    else
        printf("Top element : %d\n", queue[front]);
}

void display()
{
    if (rear == -1 && front == -1)
        printf("Queue is empty\n");
    else
    {
        for (int i = front; i <= rear; i++)
            printf("%d  ", queue[i]);
        printf("\n");
    }
}

int main()
{
    int choice;
    printf("Enter the Operation you want to perform: \n1. Enqueue \n2. Dequeue \n3. Peek \n4. Display \n5. Exit \n");
    while (choice != 5)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("\nExiting the Program... \n\n");
            break;
        default:
            printf("Invalid Choice\n");
            break;
        }
    }
    return 0;
}