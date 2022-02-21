// C언어 코딩 도장
// Chapter 67 연습문제

#include <stdio.h>

void printNumber(int count)
{
    if (count == 4)
        return;

    printf("%d\n", count);

    printNumber(++count);
}

int main()
{
    int count = 1;

    printNumber(count);

    return 0;
}