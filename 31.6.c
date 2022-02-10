// C언어 코딩 도장
// Chapter 31 연습문제

#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j < i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}