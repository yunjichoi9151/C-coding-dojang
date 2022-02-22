// C언어 코딩 도장
// Chapter 72 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#pragma pack(push, 1)
struct X850Firmware {
    short serial;
    char mode;
    char desc[20];
    int version;
  
};
#pragma pack(pop)

int main()
{
    struct X850Firmware d1;
    
    FILE* fp = fopen("x850.bin", "rb");

    fread(&d1, sizeof(d1), 1, fp);

    printf("%d\n%c\n%s\n%d", d1.serial, d1.mode, d1.desc, d1.version);
    
    fclose(fp);

    return 0;
}