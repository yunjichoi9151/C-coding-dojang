// C언어 코딩 도장
// Chapter 7 연습문제

#include <stdio.h>
#include <stdint.h>

int main()
{
    int8_t num1 = INT8_MIN;
    uint16_t num2 = UINT16_MAX;
    int32_t num3 = INT32_MAX;
    uint64_t num4 = UINT64_MAX;

    printf("%d %u %d %llu\n", num1, num2, num3, num4);

    return 0;
}