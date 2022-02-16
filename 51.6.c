// C언어 코딩 도장
// Chapter 51 심사문제

#include <stdio.h>

struct EncryptionHeader {
    char flags;
    int version;
    unsigned int seq;
};

int main()
{
    struct EncryptionHeader header;

    printf("%d\n", sizeof(header));

    return 0;
}