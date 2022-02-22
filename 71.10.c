// C언어 코딩 도장
// Chapter 71 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *buffer;
    int size;

    FILE *fp = fopen("words.txt", "r");

    fseek(fp, 0, SEEK_END);

    size = ftell(fp);
    buffer = malloc(size);
    
    fseek(fp, 7, SEEK_SET);
    fread(buffer, 4, 1, fp);
    printf("%s", buffer);
    
    memset(buffer, 0, 10);
    
    fseek(fp, -6, SEEK_END);
    fread(buffer, 2, 1, fp);
    printf("%s", buffer);
    
    free(buffer);

    return 0;
}