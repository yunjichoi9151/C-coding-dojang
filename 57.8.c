// C언어 코딩 도장
// Chapter 57 심사문제

#include <stdio.h>

enum PROTOCOL_TYPE {
    PROTOCOL_TCP = 6,
    PROTOCOL_UDP = 5,
    PROTOCOL_IP = 4
};

int main()
{
    enum PROTOCOL_TYPE p1, p2, p3;

    p1 = PROTOCOL_TCP;
    p2 = PROTOCOL_UDP;
    p3 = PROTOCOL_IP;

    printf("%d %d %d\n", p1, p2, p3);

    return 0;
}