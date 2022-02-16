// C언어 코딩 도장
// Chapter 50 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p1;
    struct Point2D p2;
    double distance;

    scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);

    int a = p2.x - p1.x;
    int b = p2.y - p1.y;
    distance = sqrt((a * a) + (b * b));

    printf("%f\n", distance);

    return 0;
}