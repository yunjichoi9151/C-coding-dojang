// C언어 코딩 도장
// Chapter 7 연습문제

#include <stdio.h>

int main()
{
    short num1;
    long long num2;
    /* unsigned short num1;
       unsigned long long num2;*/ 

    printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(int));

    return 0;
}