// C언어 코딩 도장
// Chapter 22 연습문제

#include <stdio.h>
#include <stdbool.h>                      
 
int main()
{
    bool b1 = true;
    bool b2 = false;
 
    if (b1 && b1)
        printf("참\n");
    else
        printf("거짓\n");
 
    printf("%s\n", b2 || b2 ? "참" : "거짓");
 
    return 0;
}