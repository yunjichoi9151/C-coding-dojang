// C언어 코딩 도장
// Chapter 54 연습문제

#include <stdio.h>
#include <stdlib.h>

union Data {
    short num1;
    int num2;
};

int main()
{
    union Data *d1 = malloc(sizeof(union Data));

    d1->num2 = 1;

    printf("%d %d\n", d1->num1, d1->num2);

    free(d1);

    return 0;
}