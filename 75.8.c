// C언어 코딩 도장
// Chapter 75 연습문제

#include <stdio.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main()
{
    printf("%d\n", MIN(10, 20));
    printf("%d\n", MAX(4 & 4, 2 & 2));

    return 0;
}