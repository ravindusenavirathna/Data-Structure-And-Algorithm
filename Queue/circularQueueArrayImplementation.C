/*
.
.
implement circular queue using array
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
    if ((rear + 1) % N == front)
        printf("Queue overflow\n");
    else if (front == -1 && rear == -1)
    {
        printf("Enter data : ");
        scanf("%d", &data);
        front++;
        rear++;
        queue[rear] = data;
    }
    else
    {
        printf("Enter data : ");
        scanf("%d", &data);
        rear = (rear + 1) % N;
        queue[rear] = data;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
        printf("Queue underflow\n");
    else if (front == rear)
    {
        printf("Deleted element : %d\n", queue[front]);
        printf("Queue refreshed");
    }
    else
    {
        printf("Deleted element : %d\n", queue[front]);
        front++;
    }
}

void peek()
{
    if (front == -1 && rear == -1)
        printf("Queue is empty\n");
    else
        printf("Top element : %d\n", queue[front]);
}

void display()
{
    if (front == -1 && rear == -1)
        printf("Queue is empty\n");
    else
    {
        if (rear < front)
        {
            for (int i = 0; i <= rear; i++)
                printf("%d  ", queue[i]);
            for (int i = front; i < N; i++)
                printf("%d  ", queue[i]);
        }
        else
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