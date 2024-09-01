#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int sum = 0;
    int a = 1, b = 1;
    for(int i = 1; i <= n-2; i++)
    {
        sum = a+b;
        a = b;
        b = sum;
    }
    if (n == 1 || n == 2) printf("1\n");
    else printf("%d\n", sum);
}