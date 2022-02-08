// C언어 코딩 도장
// Chapter 23 연습문제

#include <stdio.h>
 
int main()
{
    unsigned char num1 = 32;
 
    num1 = num1 >> 4 << 1;
 
    printf("%u\n", num1);
 
    return 0;
}