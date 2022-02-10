// C언어 코딩 도장
// Chapter 29 연습문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char c1;

    do
    {
        scanf("%c", &c1);
    } while (c1 != 'q');

    printf("프로그램 종료\n");

    return 0;
}