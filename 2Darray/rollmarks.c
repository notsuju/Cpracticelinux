#include <stdio.h>
#include <limits.h>

#define SUBJECTS 3

int main()
{
    int c;
    printf("Enter the number of students : ");
    scanf("%d", &c);
    int a[c][SUBJECTS];
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < SUBJECTS; j++)
        {
            printf("Enter your marks : ");
            scanf("%d", &a[i][j]);
        }
    }
    //int a[4][2] = {{1,67}, {2,45}, {3,98}, {4,87}};
    return 0;

}