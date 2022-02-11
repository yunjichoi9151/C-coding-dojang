// C언어 코딩 도장
// Chapter 33 연습문제

#include <stdio.h>
 
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0 && i % 7 == 0)
            printf("FizzBuzz\n");
        else if (i % 2 == 0)
            printf("Fizz\n");
        else if (i % 7 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
    return 0;
}