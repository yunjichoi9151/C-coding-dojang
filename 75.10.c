// C언어 코딩 도장
// Chapter 75 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define RGB(r, g, b) (((unsigned char)(r)) | ((unsigned short)((unsigned char)(g)<<8)) | ((unsigned int)((unsigned short)(b)<<16)))

int main()
{
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);
 
    printf("#%06X\n", RGB(r, g, b));
    printf("#%06X\n", RGB(1 & 1, 2 & 2, 3 & 3));

    return 0;

}