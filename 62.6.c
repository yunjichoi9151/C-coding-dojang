// C언어 코딩 도장
// Chapter 62 연습문제

#include <stdio.h>

float sub(float a, float b)
{
    return a - b;
}

int main()
{
    float num1;

    num1 = sub(1.0f, 0.1f);

    printf("%f\n", num1);

    return 0;
}