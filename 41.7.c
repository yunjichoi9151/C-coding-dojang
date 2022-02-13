// C언어 코딩 도장
// Chapter 41 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = malloc(sizeof(char) * 31);
    char *s2 = malloc(sizeof(char) * 31);

    scanf("%s %s", s1, s2);

    int ret = strcmp(s1, s2);

    printf("%d", ret);

    return 0;
}