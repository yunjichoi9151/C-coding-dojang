// C언어 코딩 도장
// Chapter 11 연습문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;

    printf("정수 세 개를 입력하세요 : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);

    return 0;
}