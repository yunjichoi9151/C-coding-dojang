// C언어 코딩 도장
// Chapter 58 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long double *numPtr1 = malloc(sizeof(long double));
    void *ptr;

    scanf("%Lf", numPtr1);

    ptr = numPtr1;

    printf("%Lf\n", *(long double *)ptr);

    free(numPtr1);

    return 0;
}