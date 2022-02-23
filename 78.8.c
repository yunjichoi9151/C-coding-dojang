// C언어 코딩 도장
// Chapter 78 심사문제
// 여러 파일을 같이 묶어놓아 모두 주석으로 처리했습니다.

/* person.h

#ifndef PERSON_H
#define PERSON_H

struct Person {
    char name[20];
    int age;
    char address[100];
};

#endif

*/

/* print.c

#include <stdio.h>
#include "person.h"

struct Person *p1;

*/

/* main.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

extern struct Person *p1;

int main()
{
    p1 = malloc(sizeof(struct Person));

    strcpy(p1->name, "홍길동");
    p1->age = 30;
    strcpy(p1->address, "서울시 용산구 한남동");

    printf("%s %d %s\n", p1->name, p1->age, p1->address);

    free(p1);

    return 0;
}

*/