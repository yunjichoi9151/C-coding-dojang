// C언어 코딩 도장
// Chapter 77 연습문제
// 여러 파일을 같이 묶어놓아 모두 주석으로 처리했습니다.

/* calcdata.h

#ifndef CALC_DATA_H
#define CALC_DATA_H

typedef struct _CALC_DATA {
    int operand1;     // 계산할 값1
    int operand2;     // 계산할 값2
    char operator;    // 연산자 문자
    int result;       // 계산 결과
} CALC_DATA;

#endif

*/

/* calc.h

#include "calcdata.h"

void mul(CALC_DATA *data);

*/

/* print.h

#include "calcdata.h"

void print(CALC_DATA *data);

*/

/* calc.c

#include "calc.h"

void mul(CALC_DATA *data)
{
    data->operator = '*';

    data->result = data->operand1 * data->operand2;
}

*/

/* print.c

#include <stdio.h>
#include "print.h"

void print(CALC_DATA *data)
{
    printf("%d %c %d = %d\n",
        data->operand1,
        data->operator,
        data->operand2,
        data->result
    );
}

*/

/* main.c

#include "calc.h"
#include "print.h"

int main()
{
    CALC_DATA data;
    data.operand1 = 2;
    data.operand2 = 3;

    mul(&data);
    print(&data);

    return 0;
}

*/