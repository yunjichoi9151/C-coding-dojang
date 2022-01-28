// C언어 코딩 도장
// Chapter 12 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    float num1;
    float num2;
    float num3;
 
    scanf("%f %f", &num1, &num2);
 
    num3 = num1 + num2;

    num3 -= 4.5;
 
    printf("%f\n", num3);
 
    return 0;
}