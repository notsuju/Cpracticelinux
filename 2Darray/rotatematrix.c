#include <stdio.h>
// LEETCODE - 48
// 1 2 3      7 4 1
// 4 5 6  ->  8 5 2
// 7 8 9      9 6 3

int main()
{
    int n;
    printf("Enter the number of sides in square matrix : ");
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("Enter a number for place (%d,%d) : ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    // transpose of matrix not using extra variable
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            // a[i][j] += a[j][i];
            // a[j][i] = a[i][j] - a[j][i];
            // a[i][j] -= a[j][i];
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    // reversing the rows
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n/2; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[i][n-1-j];
            a[i][n-1-j] = temp;
        }
    }



    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}