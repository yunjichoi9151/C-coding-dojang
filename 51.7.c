// C언어 코딩 도장
// Chapter 51 심사문제

#include <stdio.h>

#pragma pack(push, 1)
struct Packet {
    short length;
    char seq;
};
#pragma pack(pop)

int main()
{
    struct Packet pkt;

    printf("%d\n", sizeof(pkt));

    return 0;
}