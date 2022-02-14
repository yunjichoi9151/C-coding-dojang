// C언어 코딩 도장
// Chapter 47 연습문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    long long num1;
    char text[30];

    printf("정수를 입력하세요: ");
    scanf("%lld", &num1);

    sprintf(text, "%lld", num1);

    int length;
    bool isPalindrome = true;

    length = strlen(text);

    int begin = 0;
    int end = length - 1;
    while (begin < end)
    {
        if (text[begin] != text[end])
        {
            isPalindrome = false;
            break;
        }

        begin++;
        end--;
    }

    printf("%d\n", isPalindrome);

    return 0;
}