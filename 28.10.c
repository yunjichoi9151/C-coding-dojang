// C언어 코딩 도장
// Chapter 28 연습문제

#include <stdio.h>

int main()
{
    unsigned char i = 1;
    while (i != 0)
    {
        printf("%u\n", i);
        i <<= 1;
    }
    return 0;
}