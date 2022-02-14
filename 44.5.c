// C언어 코딩 도장
// Chapter 44 연습문제

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30] = "Alice in Wonderland";
    
    char *ptr = strchr(s1, 'n');

    while (ptr != NULL)
    {
        printf("%s\n", ptr);
        ptr = strchr(ptr + 1, 'n');
    }
    
    return 0;
}