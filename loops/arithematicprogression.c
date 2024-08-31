#include <stdio.h>

int main()
{
    int n;
    int x = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", x);
        x += 2;
    }
    printf("\n");
    return 0;
}