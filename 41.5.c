// C언어 코딩 도장
// Chapter 41 연습문제

#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = "Pachelbel Canon";  
    char *s2 = "Pachelbel Canon";

    int ret = strcmp(s1, s2);

    printf("%d", ret);

    return 0;
}