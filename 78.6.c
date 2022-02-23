// C언어 코딩 도장
// Chapter 78 연습문제
// 여러 파일을 같이 묶어놓아 모두 주석으로 처리했습니다.

/* point3d.h

#ifndef POINT3D_H
#define POINT3D_H

struct Point3D {
    float x, y, z;
};

#endif

*/

/* print.c

#include <stdio.h>
#include "point3d.h"

struct Point3D p1 = { 1.0f, 2.0f, 3.0f };

*/

/* main.c

#include <stdio.h>
#include "point3d.h"
                        
extern struct Point3D p1;

int main()
{
    printf("%.1f %.1f %.1f\n", p1.x, p1.y, p1.z);

    return 0;
}

*/