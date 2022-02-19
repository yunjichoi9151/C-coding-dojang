// C언어 코딩 도장
// Chapter 61 심사문제

#include <stdio.h>
#include <stdbool.h>

float getArmor()
{
    return 20.5f;
}

bool hasSlowSkill()
{
    return false;
}

int main()
{
    float armor;
    bool slow;

    armor = getArmor();
    slow = hasSlowSkill();

    printf("%f\n", armor);
    printf("%s\n", slow == true ? "true" : "false");
 
    return 0;
}