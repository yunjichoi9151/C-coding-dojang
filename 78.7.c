// C언어 코딩 도장
// Chapter 78 심사문제

#include <stdio.h>
#include <stdlib.h>

struct Point2D {
    int x;
    int y;
};

struct Point2D *p1;

void printPoint2D()
{
    printf("%d %d\n", p1->x, p1->y);
}
 
int main()
{
    p1 = malloc(sizeof(struct Point2D));
    p1->x = 10;
    p1->y = 20;

    printPoint2D();

    free(p1);

    return 0;
}