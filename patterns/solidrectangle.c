#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number of lines : ");
    scanf("%d", &a);
    int b;
    printf("Enter the number of stars in each line : ");
    scanf("%d", &b);
    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= b; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}