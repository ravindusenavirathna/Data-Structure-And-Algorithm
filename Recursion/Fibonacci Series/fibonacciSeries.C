/*
.
.
Write a program in C to print the Fibonacci Series using recursion
©尺乙尺 2023
.
.
*/

#include <stdio.h>

int fibonacci(int n, int a, int b)
{
    if (n > 0)
    {
        printf("%d  ", b);
        b = fibonacci(n - 1, b, a + b);
    }
}

int main()
{
    int n;
    printf("Input number of terms for the Series : ");
    scanf("%d", &n);
    if (n <= 0)
        printf("Invalid term.");
    else
        fibonacci(n, 0, 1);
}