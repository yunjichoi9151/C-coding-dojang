// C언어 코딩 도장
// Chapter 20 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    char c1;
    scanf("%c", &c1);

    printf("%s\n", c1 != 'k' ? "참" : "거짓");
	printf("%s\n", c1 > 'h' ? "참" : "거짓");
	printf("%s\n", c1 <= 'o' ? "참" : "거짓");
 
    return 0;
}