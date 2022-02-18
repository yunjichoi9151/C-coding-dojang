// C언어 코딩 도장
// Chapter 57 연습문제

#include <stdio.h>

typedef enum _Month {
    Jan  = 1,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec,
    MonthCount
} Month;

int main()
{
    for (Month  i = Jan; i < MonthCount; i++)
    {
        printf("%d ", i);
    }

    return 0;
}