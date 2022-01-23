// C언어 코딩 도장
// Chapter 7 연습문제

#include <stdio.h>

int main()
{
    unsigned char num1 = 256;
    unsigned short num2 = 65536;
    long long num3 = 9223372036854775808;

    printf("%u %u %lld\n", num1, num2, num3);

    return 0;
}