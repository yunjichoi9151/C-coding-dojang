// C언어 코딩 도장
// Chapter 24 심사문제

#define __USE_MINGW_ANSI_STDIO 1 // Dev-C++(MinGW)에서 %hhu를 사용하기 위한 설정
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    unsigned char flag = 16;
    unsigned char num1, num2;
 
    scanf("%hhu %hhu", &num1, &num2);
 
    flag |= num1 << 3;
    flag &= ~(num2 >> 2);
    flag ^= 1 << 7;
 
    printf("%u\n", flag);
 
    return 0;
}