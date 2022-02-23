// C언어 코딩 도장
// Chapter 76 연습문제

#include <stdio.h>

#ifndef DEBUG
#define DEBUG
#endif

#include "debug.h"

int main()
{
#if defined DEBUG && defined ENABLE_DEBUG_MESSAGE
    printf("Debug: %s %s %s %d\n", __DATE__, __TIME__, __FILE__, __LINE__);
#endif

    return 0;
}