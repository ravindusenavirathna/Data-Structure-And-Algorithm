/*
.
.
delete value from the array
©尺乙尺 2023
.
.
*/

// time complexity (n-position)
#include <stdio.h>

int main()
{
    int arr[10] = {23, 1, 45, 8, 14}, position, size = 5;
    printf("Enter the position:\n");
    scanf("%d", &position);
    for (int i = position - 1; i <= size - 1; i++)
        arr[i] = arr[i + 1];
    size--;
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}