// C언어 코딩 도장
// Chapter 8 연습문제

#include <stdio.h>
#include <float.h>

int main()
{
    float num1 = FLT_MIN;

    num1 = num1 / 100000000.0f;

    printf("%e\n", num1);

    return 0;
}