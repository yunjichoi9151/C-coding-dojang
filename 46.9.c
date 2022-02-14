// C언어 코딩 도장
// Chapter 46 연습문제

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s1 = "97.527824";
    float num1;

    num1 = atof(s1);

    printf("%f\n", num1);

    return 0;
}