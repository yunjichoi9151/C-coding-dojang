// C언어 코딩 도장
// Chapter 59 연습문제

#include <stdio.h>

int main()
{
    int *numPtrA = NULL;

    printf("%p\n", numPtrA + 2);
    printf("%p\n", numPtrA + 5);

    return 0;
}