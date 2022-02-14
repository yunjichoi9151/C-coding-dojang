// C언어 코딩 도장
// Chapter 45 연습문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[40] = "Alice's Adventures in Wonderland";

    char *tok = strtok(s1, " ");

    while (tok != NULL)                             
    {
        printf("%s\n", tok);
        tok = strtok(NULL, " ");
    }

    return 0;
}