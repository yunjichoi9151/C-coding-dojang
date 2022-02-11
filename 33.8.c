// C언어 코딩 도장
// Chapter 33 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    for (int i = num1; i <= num2; i++)
    {
        if (i % 5 == 0 && i % 11 == 0)
            printf("FizzBuzz\n");
        else if (i % 5 == 0)
            printf("Fizz\n");
        else if (i % 11 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
    return 0;
}