// LEETCODE-867
#include <stdio.h>

#include <limits.h>

#define ROWS 2
#define COLUMNS 3

int main()
{
    int a[ROWS][COLUMNS] = {{2,3,5}, {6,7,8}};
    int r = 0;
    for(int i = 0; i < COLUMNS; i++)
    {
        for(int j = 0; j < ROWS; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}