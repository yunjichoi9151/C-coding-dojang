// C언어 코딩 도장
// Chapter 63 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printFullName(char *familyName, char *givenName)
{
    printf("%s%s", familyName, givenName);
}

int main()
{
    char familyName[31];
    char givenName[31];

    scanf("%s %s", familyName, givenName);

    printFullName(familyName, givenName);

    return 0;
}