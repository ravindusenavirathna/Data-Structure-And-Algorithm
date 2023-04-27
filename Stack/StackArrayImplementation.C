/*
.
.
implement stack using array
©尺乙尺 2023
.
.
*/

#include <stdio.h>
#define N 5
int top = -1;
int stack[N];

void push()
{
    int element;
    if (top == N - 1)
        printf("Stack Overflow\n");
    else
    {
        printf("Enter the Element : ");
        scanf("%d", &element);
        top++;
        stack[top] = element;
    }
}

void pop()
{
    if (top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("Deleted element : %d\n", stack[top]);
        top--;
    }
}

void peek()
{
    if (top == -1)
        printf("Stack Empty\n");
    else
        printf("Top element : %d\n", stack[top]);
}

void display()
{
    if (top == -1)
        printf("Stack Empty\n");
    else
    {
        for (int i = top; i > -1; i--)
            printf("%d  ", stack[i]);
        printf("\n");
    }
}

int main()
{
    int choice;
    printf("Enter the Operation you want to perform: \n1. Push \n2. Pop \n3. Peek \n4. Display \n5. Exit \n");
    while (choice != 5)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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
