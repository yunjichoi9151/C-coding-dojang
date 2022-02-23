// C언어 코딩 도장
// Chapter 80 연습문제

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int result = 0;

    for (int i = 1; i < argc; i++)
    {
        result = result + atoi(argv[i]);
    }  

    printf("%d\n", result);

    return 0;
}