// C언어 코딩 도장
// Chapter 24 연습문제

#include <stdio.h>
 
int main()
{
    unsigned char flag1 = 1 << 7;
    unsigned char flag2 = 1 << 3;
 
    flag1 |= 1 << 2;
    flag1 &= ~(1 << 7);
    flag2 ^= 1 << 3;
 
    printf("%u %u\n", flag1, flag2);
 
    return 0;
}