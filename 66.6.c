// C언어 코딩 도장
// Chapter 66 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdarg.h>

int sum(int args, ...)
{
    int result = 0;

    va_list ap;
    va_start(ap, args);
    for (int i = 0; i < args; i++)
    {
        result += va_arg(ap, int);
    }
    va_end(ap);

    return result;
}

int main()
{
    int num1, num2;
    int num3, num4, num5;

    scanf("%d %d", &num1, &num2);
    scanf("%d %d %d", &num3, &num4, &num5);

    printf("%d\n", sum(2, num1, num2));
    printf("%d\n", sum(3, num3, num4, num5));

    return 0;
}