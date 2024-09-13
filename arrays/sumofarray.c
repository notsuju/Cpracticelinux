#include <stdio.h>

int main()
{
    int a[5], sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Sum of array : %d\n", sum);
    return 0;
}