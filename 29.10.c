// C언어 코딩 도장
// Chapter 29 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    unsigned int num1;
    unsigned int sum = 0;

    scanf("%d", &num1);

    unsigned int i = 0;
    do
    {
        sum += i;
        i++;
    } while (i <= num1);

    printf("%d\n", sum);

    return 0;
}