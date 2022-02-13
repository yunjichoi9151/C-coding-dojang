// C언어 코딩 도장
// Chapter 41 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = malloc(sizeof(char) * 31);

    scanf("%s", s1);

    printf("%d\n", strlen(s1));

    return 0;
}