// C언어 코딩 도장
// Chapter 18 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    char c1;

    scanf("%c", &c1);
 
    if (c1 == 'a')
        printf("a입니다.\n");
    else
        printf("a가 아닙니다.\n");
 
    return 0;
}