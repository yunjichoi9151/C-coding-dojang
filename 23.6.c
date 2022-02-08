// C언어 코딩 도장
// Chapter 23 연습문제

#include <stdio.h>
 
int main()
{
    unsigned char num1 = 1;
    unsigned char num2 = 5;
 
    printf("%u\n", num1 | num2);
    printf("%u\n", num1 ^ num2);
    printf("%u\n", num1 & num2);
 
    num1 = ~ num2;
    printf("%u\n", num1);
 
    return 0;
}