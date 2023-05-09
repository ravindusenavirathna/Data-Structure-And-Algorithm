/*
.
.
Write a program in C to print an array element using recursion
©尺乙尺 2023
.
.
*/

#include <stdio.h>

void printArray(int *array, int i)
{
    if (i > 0)
    {
        printf("%d ", *array);
        printArray(array + 1, i - 1);
    }
}
int main()
{
    int array[] = {45, 67, 3, 9, 12, 1};
    printArray(array, sizeof(array) / sizeof(*array));
    return 0;
}
