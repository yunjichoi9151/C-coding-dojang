// C언어 코딩 도장
// Chapter 7 심사문제

#include <stdio.h>

int main()
{
    char num1;
    short num2;

    printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(long long));

    return 0;
}