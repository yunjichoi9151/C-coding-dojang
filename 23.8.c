// C언어 코딩 도장
// Chapter 23 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    unsigned int num1, num2;

    scanf("%u %u", &num1, &num2);
    
    printf("%u\n", num1 ^ num2);
    printf("%u\n", num1 | num2);
    printf("%u\n", num1 & num2);
    printf("%u\n", ~num1);
 
    return 0;
}