// C언어 코딩 도장
// Chapter 57 연습문제

#include <stdio.h>

enum DEVICE_TYPE {
    DEVICE_PCI_EX = 2,
    DEVICE_IEEE1394,
    DEVICE_USB
};

int main()
{
    enum DEVICE_TYPE type;

    type = DEVICE_IEEE1394;

    printf("%d\n", type);

    return 0;
}