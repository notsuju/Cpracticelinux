// LEETCODE-867
#include <stdio.h>
// #include <limits.h>

// #define ROWS 2
// #define COLUMNS 3

int main()
{
    int ROWS,COLUMNS;
    printf("Enter the number of rows : ");
    scanf("%d", &ROWS);
    printf("Enter the number of columns : ");
    scanf("%d", &COLUMNS);
    int a[ROWS][COLUMNS];
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLUMNS; j++)
        {
            printf("Enter a number : ");
            scanf("%d", &a[i][j]);
        }
    }
    //int a[ROWS][COLUMNS] = {{2,3,5}, {6,7,8}};
    //int b[COLUMNS][ROWS];
    for(int i = 0; i < COLUMNS; i++)
    {
        for(int j = 0; j < ROWS; j++)
        {
            //b[i][j] = a[j][i];
            //printf("%d ", a[j][i]);
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
