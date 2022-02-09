// C언어 코딩 도장
// Chapter 28 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int amount;

    scanf("%d", &amount);

    while (amount >= 1200)
    {
        amount -= 1200;
        printf("%d\n", amount);
    }
    return 0;
}