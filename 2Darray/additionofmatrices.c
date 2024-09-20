#include <stdio.h>
#include <limits.h>

#define ROWS 2
#define COLUMNS 3

int main()
{
    int a[ROWS][COLUMNS] = {{3,4,6}, {4,7,9}};
    int b[ROWS][COLUMNS] = {{1,3,3}, {0,0,0}};
    //int sum[ROWS][COLUMNS];
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLUMNS; j++)
        {
            //sum[i][j] = a[i][j] + b[i][j];
            //printf("%d ", sum[i][j]);
            printf("%d ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}