// C언어 코딩 도장
// Chapter 21 연습문제

#include <stdio.h>
 
int main()
{
    int num1 = 10;
    int num2 = 0;
 
    if (num1 && num1)
        printf("참\n");
    else
        printf("거짓\n");
 
    if (num1 || num2)
        printf("참\n");
    else
        printf("거짓\n");
 
    printf("%s\n", !num2 ? "참" : "거짓");
 
    return 0;
}