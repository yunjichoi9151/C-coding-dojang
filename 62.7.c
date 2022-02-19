// C언어 코딩 도장
// Chapter 62 심사문제

#include <stdio.h>

void setAttackSpeed(float type)
{
    printf("Attack Speed: %f\n", type);
}

int main()
{
    setAttackSpeed(0.638f);
    setAttackSpeed(1.23f);

    return 0;
}