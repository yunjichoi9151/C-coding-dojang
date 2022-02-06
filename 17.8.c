// C언어 코딩 도장
// Chapter 17 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int age;

    scanf("%d", &age);

    if (age < 18)
    {
        printf("청소년 관람불가\n");
    }

    return 0;
}