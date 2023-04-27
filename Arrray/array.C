#include <stdio.h>
int arr[7] = {2, 34, 8, 0, 1}, n = 5;

void print()
{
    printf("\n");
    for (int i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    printf("\n");
}

void insertion()
{
    int val, pos;
    printf("Enter the value and position : ");
    scanf("%d%d", &val, &pos);
    pos--;
    for (int i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];
    arr[pos] = val;
    n++;
    print();
}

void deletion()
{
    int pos;
    printf("Enter the position want to delete : ");
    scanf("%d", &pos);
    pos--;
    for (int i = pos; i < n; i++)
        arr[i] = arr[i + 1];
    n--;
    print();
}

void search()
{
    int val, pos = 0;
    printf("Enter Value : ");
    scanf("%d", &val);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            pos = i + 1;
        }
    }
    if (pos == 0)
        printf("Value Doesn't exist.");
    else
        printf("Value position : %d", pos);
}

int main()
{
    insertion();
    deletion();
    search();
}