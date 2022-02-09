// C언어 코딩 도장
// Chapter 27 연습문제

#include <stdio.h>

int main()
{
    for (int i = 2, j = 5; i <= 32; i *= 2, j--)
    {
        printf("%d %d\n", i, j);
    }

    return 0;
}