// C언어 코딩 도장
// Chapter 67 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int num1)
{
    if (num1 == 0 || num1 == 1)
        return num1;
    else
        return fib(num1 - 1) + fib(num1 - 2);
}

int main()
{
    int num1;

    scanf("%d", &num1);

    printf("%d\n", fib(num1));

    return 0;
}