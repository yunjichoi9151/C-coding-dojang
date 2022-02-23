// C언어 코딩 도장
// Chapter 77 심사문제
// 여러 파일을 같이 묶어놓아 모두 주석으로 처리했습니다.

/* data.h

#ifndef DATA_H
#define DATA_H

typedef struct _DATA {
    char string[100];
} DATA;

#endif 

*/

/* append.h

#include "data.h"

void append(DATA *data, char *s1, char *s2);

*/

/* print.h

#include "data.h"

void print(DATA *data);

*/

/* append.c

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "data.h"

void append(DATA *data, char *s1, char *s2)
{
    strcpy(data->string, s1);
    strcat(data->string, s2);
}

*/

/* print.c

#include <stdio.h>
#include "print.h"

void print(DATA *data)
{
    printf("%s\n", data->string);
}

*/

/* main.c

#include "append.h"
#include "print.h"

int main()
{
    DATA data = { 0, };
    append(&data, "The ", "Little Prince");
    print(&data);

    return 0;
}

*/