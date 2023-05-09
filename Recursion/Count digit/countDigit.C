/*
.
.
Write a program in C to count the number of digit in number using recursion
©尺乙尺 2023
.
.
*/

#include <stdio.h>
int i = 0;

int digit(int n)
{
    if (n > 0)
    {
        i++;
        digit(n / 10);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    digit(n);
    printf("%d", i);
    return 0;
}