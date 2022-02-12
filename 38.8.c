// C언어 코딩 도장
// Chapter 38 심사문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;

    scanf("%d %d", &row, &col);

    char **matrix = malloc(sizeof(char *) * col);

    for(int i=0; i<col; i++)
    {
        matrix[i] = malloc(sizeof(char) * (row+1));    
    
        scanf("%s", matrix[i]);
    }
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            if(matrix[i][j] == '*')
                continue;
            else
            {
                for(int y=i-1; y<=i+1; y++)
                {
                    for(int x=j-1; x<=j+1; x++)
                    {
                        if(x==j && y==i)
                            continue;
                        if(x<0 || x>=row || y<0 || y>=col)
                            continue;
                        if(matrix[y][x]=='*')
                            matrix[i][j]++;
                    }
                }
            }
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(matrix[i][j]=='*')
                printf("*");
            else
                printf("%d", matrix[i][j]-'.');
        }
        printf("\n");
    }
    return 0;
}