// C언어 코딩 도장
// Chapter 10 심사문제

#include <stdio.h>

int main()
{
    const long double con1 = -2.225074e-308L;
    const int con2 = 0x1285;
    const long long con3 = 9223372036854775807LL;

    printf("%Le 0x%x %lld\n", con1, con2, con3);

    return 0;
}