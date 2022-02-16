// C언어 코딩 도장
// Chapter 49 심사문제

#include <stdio.h>

struct Point3D {
    float x;
    float y;
    float z;
};

int main()
{
    struct Point3D p1 = { 10.0f, 20.0f, 30.0f };
    struct Point3D *ptr;

    ptr = &p1;
 
    printf("%f %f %f\n", ptr->x, ptr->y, ptr->z);

    return 0;
}