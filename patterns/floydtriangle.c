#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    int x = 1;
    for(int i = 1; i <=n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", x);
            x++;
        }
        printf("\n");
    }
    return 0;
}
