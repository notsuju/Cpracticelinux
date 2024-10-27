#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int y;
    printf("Enter the number in deno : ");
    scanf("%d", &y);
    n %= y;
    printf("Your modulus is : %d\n", n);
    return 0;
}