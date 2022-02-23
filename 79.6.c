// C언어 코딩 도장
// Chapter 79 연습문제

#include <stdio.h>

int getPowerOf2()
{
    static int num1 = 1;

    num1 *= 2;

    return num1;
}

int main()
{
    printf("%d\n", getPowerOf2());
    printf("%d\n", getPowerOf2());
    printf("%d\n", getPowerOf2());
    printf("%d\n", getPowerOf2());

    return 0;
}