// C언어 코딩 도장
// Chapter 15 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    int num;

    scanf("%d", &num);

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", num % 10);
        num /= 10;
    }
    
    return 0;
}