#include <stdio.h>

int main()
{
    int a;
    printf("Enter number of lines : ");
    scanf("%d", &a);
    int x = 1;
    // for(int i = 1; i <= a; i++)
    // {
    //     x = 1;
    //     for(int j = 1; j <= i; j++)
    //     {
    //         printf("%d ", x);
    //         x += 2;
    //     }
    //     printf("\n");
    // }
    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= 2*i-1; j += 2)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}