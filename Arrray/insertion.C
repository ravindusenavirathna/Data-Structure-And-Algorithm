/*
.
.
insert value to the specific position in array
©尺乙尺 2023
.
.
*/

// time complexity (n-position)
#include <stdio.h>

int main()
{
    int arr[10] = {23, 1, 45, 8, 14}, n, position, size = 5;
    printf("Enter the position and value :\n");
    scanf("%d%d", &position, &n);
    for (int i = size - 1; i >= position - 1; i--)
        arr[i + 1] = arr[i];
    arr[position - 1] = n;
    size++;
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}