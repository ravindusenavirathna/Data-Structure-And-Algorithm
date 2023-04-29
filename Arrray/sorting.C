/*
.
.
array sorting
©尺乙尺 2023
.
.
*/

#include <stdio.h>
int arr[] = {2, 45, 10, 4, 7, 1, 9}, n = sizeof(arr) / sizeof(arr[0]);

void print()
{
    for (int i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    printf("\n");
}

void bubble()
{
    int temp;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
}

void insertion()
{
    int pos, c;
    for (int i = 1; i < n; i++)
    {
        c = arr[i];
        pos = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (c < arr[j])
            {
                pos = j;
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        arr[pos] = c;
    }
    print();
}

void selection()
{
    int min, pos;
    for (int i = 0; i < n; i++)
    {
        min = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (min > arr[j])
            {
                pos = j;
                min = arr[j];
            }
        }
        arr[pos] = arr[i];
        arr[i] = min;
    }
}

int main()
{
    print();
    // bubble();
    // insertion();
    selection();
    print();
}