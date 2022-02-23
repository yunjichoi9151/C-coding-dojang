// C언어 코딩 도장
// Chapter 75 심사문제

#include <stdio.h>

struct Point2D {
    float x, y;
};

#define ARRSIZE(x) (sizeof(x) / sizeof(x[0]))

int main()
{
    int numArr1[10];
    long long numArr2[5];
    struct Point2D p[3];

    printf("%d\n", ARRSIZE(numArr1));
    printf("%d\n", ARRSIZE(numArr2));
    printf("%d\n", ARRSIZE(p));

    return 0;

}