#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 65; j <= i + 64; j++)
        {
            if (i % 2 == 0)
                printf("%c ", j);
            else
                printf("%d ", j - 64);
        }
        printf("\n");
    }
    return 0;
}