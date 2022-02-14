// C언어 코딩 도장
// Chapter 44 연습문제

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30] = "The Little Prince";

    char *ptr = strrchr(s1, 'i');

    printf("%s\n", ptr);

    return 0;
}