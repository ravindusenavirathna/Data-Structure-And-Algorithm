/*
.
.
Write a program in C to reverse a string using recursion
©尺乙尺 2023
.
.
*/

#include <stdio.h>
#include <string.h>

int rev(char *n, int i)
{
    if (i >= 0)
    {
        printf("%c", *(n + i - 1));
        rev(n, i - 1);
    }
}
int main()
{
    char n[50];
    scanf(" %[^\n]s", &n);
    rev(n, strlen(n));
    return 0;
}
