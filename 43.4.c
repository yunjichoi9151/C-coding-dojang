// C언어 코딩 도장
// Chapter 43 연습문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char s1[20];

    sprintf(s1, "%dth %s", 9, "Symphony");

    printf("%s\n", s1);

    return 0;
}