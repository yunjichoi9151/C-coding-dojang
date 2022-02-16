// C언어 코딩 도장
// Chapter 51 연습문제

#include <stdio.h>

struct CompressHeader {
    char flags;
    int version;
};

int main()
{
    struct CompressHeader header;

    printf("%d\n", sizeof(header));

    return 0;
}