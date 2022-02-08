// C언어 코딩 도장
// Chapter 25 연습문제

#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 1;
    int num3;

    num3 = 2 * ((1 << num1) + (2 >> num2));

    printf("%d\n", num3);

    return 0;
}