// C언어 코딩 도장
// Chapter 34 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int *numPtr1;
    int **numPtr2;
    int num1;

    scanf("%d", &num1);

    numPtr1 = &num1;
    numPtr2 = &numPtr1;

    printf("%d\n", **numPtr2);

    return 0;
}