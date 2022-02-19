// C언어 코딩 도장
// Chapter 63 연습문제

#include <stdio.h>

int getNumber(int *a, int *b)
{
    *a = 10;
    *b = 20;
    return 30;
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    int result = 0;

    result = getNumber(&num1, &num2);

    printf("%d %d %d\n", num1, num2, result);

    return 0;
}