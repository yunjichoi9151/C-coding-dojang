// C언어 코딩 도장
// Chapter 42 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[31];
    char s2[31];
    
    scanf("%s", s1);
    strcpy(s2, s1);

    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}