// C언어 코딩 도장
// Chapter 60 연습문제

#include <stdio.h>

void printHostname();
void printIPAddress();

int main()
{
    printHostname();
    printIPAddress();

    return 0;
}

void printHostname()
{
    printf("Saturn\n");
}

void printIPAddress()
{
    printf("192.168.10.6\n");
}