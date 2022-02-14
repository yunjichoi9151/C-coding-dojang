// C언어 코딩 도장
// Chapter 45 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[61];

    scanf("%s", s1);

    char *tok = strtok(s1, ".");

    while (tok != NULL)                             
    {
        printf("%s\n", tok);
        tok = strtok(NULL, ".");
    }

    return 0;
}