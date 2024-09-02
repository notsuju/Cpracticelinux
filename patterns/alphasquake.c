#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    for(int i = 1; i <= a; i++)
    {
        for(int j = 65; j <= a+64; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0; 
}