// C언어 코딩 도장
// Chapter 38 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int input;

    scanf("%d", &input);

    int **matrix = malloc(sizeof(int *) * input);

    for(int i=0; i<input; i++)
    {
        matrix[i] = malloc(sizeof(int) * input);
    
        for(int j=0; j<input; j++)
        {
            matrix[i][j] = 0;
        }
    }
    
    for(int i=0; i<input; i++)
    {
        matrix[i][i] = 1;
    }

    for(int i=0; i<input; i++)
    {
        for(int j=0; j<input; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0; i<input; i++)
    {
        free(matrix[i]);
    }
    
    free(matrix);
    
    return 0;
}