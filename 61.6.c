// C언어 코딩 도장
// Chapter 61 연습문제

#include <stdio.h>
#include <stdbool.h>

int getMana()
{
    return 222;
}

float getAttackSpeed()
{
    return 0.679f;
}

bool isMelee()
{
    return true;
}

int main()
{
    int mana;
    float attackSpeed;
    bool melee;

    mana = getMana();
    attackSpeed = getAttackSpeed();
    melee = isMelee();

    printf("%d\n", mana);
    printf("%f\n", attackSpeed);
    printf("%d\n", melee);

    return 0;
}