// C언어 코딩 도장
// Chapter 58 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float num1;
    int num2;

    scanf("%f", &num1);

    num2 = (int)num1;
    printf("%d\n", num2);

    return 0;
}