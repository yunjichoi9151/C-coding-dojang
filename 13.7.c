// C언어 코딩 도장
// Chapter 13 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    int num1;
    float num2;
    char c1;
 
    scanf("%d %f %c", &num1, &num2, &c1);
 
    num1++;
    num2++;
    c1--;
 
    printf("%d %f %c\n", num1, num2, c1);
 
    return 0;
}