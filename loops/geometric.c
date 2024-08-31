#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    n -= 1;
    int x = 1 << n;
    for(int i = 1; i <= x; i = i * 2)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}