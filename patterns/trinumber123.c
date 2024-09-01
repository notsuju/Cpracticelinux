#include <stdio.h>

int main()
{
    int a;
    printf("Enter number of lines : ");
    scanf("%d", &a);
    int x = 1;
    for(int i = 1; i <= a; i++)
    {
        x = 1;
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", x);
            x += 2;
        }
        printf("\n");
    }
}