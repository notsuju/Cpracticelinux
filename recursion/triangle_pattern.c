#include <stdio.h>

void pattern(int n)
{
    if(n <= 0)
    {
        return;
    }
    pattern(n - 1);
    for(int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
    return;
}
int main()
{
    int n;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}