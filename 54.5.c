// C언어 코딩 도장
// Chapter 54 연습문제

#include <stdio.h>

union Data {
    char c1;
    short num1;
};                     

int main()
{
    union Data d1;

    d1.num1 = 0x5678;

    printf("0x%x 0x%x\n", d1.num1, d1.c1);

    return 0;
}