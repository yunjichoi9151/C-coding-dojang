// C언어 코딩 도장
// Chapter 70 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *buffer = malloc(100);
    memset(buffer, 0, 100);

    FILE *fp = fopen("words.txt", "r");

    fread(buffer, 100, 1, fp);

    printf("%s\n", buffer);

    fclose(fp);

    free(buffer);

    return 0;
}