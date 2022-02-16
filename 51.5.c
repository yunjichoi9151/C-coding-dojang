// C언어 코딩 도장
// Chapter 51 연습문제

#include <stdio.h>

#pragma pack(push, 1)
struct Packet {
    short length;
    int seq;
};
#pragma pack(pop)

int main()
{
    struct Packet pkt;

    printf("%d\n", sizeof(pkt));

    return 0;
}