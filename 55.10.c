// C언어 코딩 도장
// Chapter 55 심사문제

#include <stdio.h>

struct DeviceOption {
    union {
        short option;
        struct {
            unsigned char boot;
            unsigned char interrupt;
        };
    };                         
};

int main()
{
    struct DeviceOption opt;

    opt.boot = 0x22;
    opt.interrupt = 0x11;

    printf("0x%x\n", opt.option);

    return 0;
}