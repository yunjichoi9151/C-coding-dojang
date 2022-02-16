// C언어 코딩 도장
// Chapter 53 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[30];
    int age;
};

int main()
{
    struct Person *p[5];

    int oldest = 0, oldestIdx;

    for(int i = 0; i < sizeof(p) / sizeof(struct Person *); i++)
    {
        p[i] = malloc(sizeof(struct Person));
        
        scanf("%s %d", p[i]->name, &p[i]->age);
        
        if(p[i]->age > oldest)
        {
            oldest = p[i]->age;
            oldestIdx = i;
        }
    }

    printf("%s\n", p[oldestIdx]->name);

    for (int i = 0; i < sizeof(p) / sizeof(struct Person *); i++)
    {
        free(p[i]);
    }

    return 0;
}