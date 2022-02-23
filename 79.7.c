// C언어 코딩 도장
// Chapter 79 연습문제
// 여러 파일을 같이 묶어놓아 모두 주석으로 처리했습니다.

/* sub.c

#include <stdio.h>
#include <stdbool.h>

bool output = false;

bool getOutputConfig()
{
    return output;
}

*/

/* main.c

#include <stdio.h>
#include <stdbool.h>

static bool output = true;

static bool getOutputConfig()
{
    return output;
}

int main()
{
    if (getOutputConfig())
    {
        printf("The Little Prince\n");
    }

    return 0;
}

*/