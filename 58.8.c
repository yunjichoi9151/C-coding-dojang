// C언어 코딩 도장
// Chapter 58 연습문제

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    uint64_t *numPtr1 = malloc(sizeof(uint64_t));
    void *ptr;

    *numPtr1 = 12;

    ptr = numPtr1;

    printf("%llu\n", *(uint64_t *)ptr);

    free(numPtr1);

    return 0;
}