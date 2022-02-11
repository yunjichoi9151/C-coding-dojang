// C언어 코딩 도장
// Chapter 32 연습문제

#include <stdio.h>

int main()
{
    int num1 = 1;

    for (int i = 0; i < 10; i++)
    {
        switch (num1)
        {
        case 1:
            printf("1입니다.\n");
            goto EXIT;
        default:
            break;
        }
    }

EXIT:
    return 0;
}