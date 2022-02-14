// C언어 코딩 도장
// Chapter 45 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1001];
    int count = 0;

    scanf("%[^\n]s", s1);

    char* ptr = strtok(s1, " .,");

    while (ptr != NULL)
    {
        if (ptr != NULL && strcmp(ptr, "the") == 0)
            count++;

        ptr = strtok(NULL, " .,");
    }

    printf("%d", count);

    return 0;
}