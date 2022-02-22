// C언어 코딩 도장
// Chapter 70 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char name[31];
    int order;

    scanf("%s %d", name, &order);

    FILE* fp = stdout;

    fprintf(stdout, "The %dth Satellite of Jupiter: %s\n", order, name);

    fclose(fp);

    return 0;
}