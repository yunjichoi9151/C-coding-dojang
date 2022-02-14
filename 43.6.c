// C언어 코딩 도장
// Chapter 43 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int number;
    char name[31], result[40];

    scanf("%d %s", &number, name);

    if (number == 1)
        sprintf(result, "%dst %s", number, name);
    if (number == 2)
        sprintf(result, "%dnd %s", number, name);
    if (number == 3)
        sprintf(result, "%drd %s", number, name);
    if (number >= 4)
        sprintf(result, "%dth %s", number, name);

    printf("%s\n", result);

    return 0;
}