// C언어 코딩 도장
// Chapter 15 연습문제

#include <stdio.h>
 
int main()
{
    int num1 = 15;
    int num2 = 27;
    int num3 = 3;
 
    num1 %= num3;
    num2 %= num3;
 
    printf("%d\n", num1);
    printf("%d\n", num2);
 
    return 0;
}