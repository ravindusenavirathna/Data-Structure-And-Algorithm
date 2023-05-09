/*
.
.
Write a program in C to print the summation of number set using recursion
©尺乙尺 2023
.
.
*/

#include <stdio.h>
int sum()
{
    int yn, n;
    printf("continue?(0/1) :");
    scanf("%d", &yn);
    if (yn)
    {
        printf("Enter Number :");
        scanf("%d", &n);
        return sum() + n;
    }
}
int main()
{
    printf("%d", sum());
    return 0;
}
