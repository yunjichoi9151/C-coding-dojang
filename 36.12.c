// C언어 코딩 도장
// Chapter 36 연습문제

#include <stdio.h>

int main()
{
    int decimal = 0;
    int binary[4] = { 1, 1, 0, 1 };    // 1101 순서대로 저장됨

    int position = 0;
    for (int i = sizeof(binary) / sizeof(int) - 1; i >= 0; i--)
    {
        if (binary[i] == 1)
            decimal += 1 << position;

        position++;
    }

    printf("%d\n", decimal);

    return 0;
}