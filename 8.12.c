// C언어 코딩 도장
// Chapter 8 심사문제

#include <stdio.h>
#include <float.h>

int main()
{
    float num1 = -FLT_MAX;
    
    num1 = num1 * 1000.0f;

    printf("%f\n", num1);

    return 0;
}