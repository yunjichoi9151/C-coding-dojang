// C언어 코딩 도장
// Chapter 20 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    int num1;

    scanf("%d", &num1);

    printf("%d\n", num1 != 7 ? 1 : 2);
 
    return 0;
}