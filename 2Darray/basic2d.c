#include <stdio.h>
#include <limits.h>

#define ROWS 2
#define COLUMNS 3
#define LOVE "love"


int main()
{
    // initialization of 2d array
    //int a[ROWS][COLUMNS] = {{1,9,8},{7,6,5}};
    //
    //
    //TAKING 2D ARRAYS AS INPUT
    int a[ROWS][COLUMNS];
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLUMNS; j++)
        {
            printf("Enter a number : ");
            scanf("%d", &a[i][j]);
        }
    }
    // PRINTING OF 2D ARRAYS
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLUMNS; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("%s\n", LOVE);
    // int a[][3] = {1,2,3,4,5,6};
    // int arr[2][2];
    // arr[0][0] = 1;
    // arr[0][1] = 2;
    // arr[1][0] = 3;
    // arr[1][1] = 4;
    // 1 2
    // 3 4
    return 0;
}