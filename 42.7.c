// C언어 코딩 도장
// Chapter 42 연습문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s1 = "The Little Prince";
    char *s2 = malloc(sizeof(char) * 20);

    strcpy(s2, s1);

    printf("%s\n", s2);

    free(s2);

    return 0;
}