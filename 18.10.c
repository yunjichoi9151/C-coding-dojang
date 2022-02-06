// C언어 코딩 도장
// Chapter 18 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int kor, eng, math, sci;

    scanf("%d %d %d %d", &kor, &eng, &math, &sci);

    if (kor >= 0 && kor <= 100 && eng >= 0 && eng <= 100 && math >= 0 && math <= 100 && sci >= 0 && sci <= 100)
    {
        if((kor + eng + math + sci) / 4 >= 85)
        {
            printf("합격\n");
        }
        else
        {
            printf("불합격\n");
        }
    }
    else
    {
        printf("잘못된 점수\n");
    }

    return 0;
}