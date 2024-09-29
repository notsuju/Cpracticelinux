#include <stdio.h>
// LEETCODE - 867
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
