#include <stdio.h>

int power(int a, int b);
int main()
{
    int a;
    printf("Enter the base : ");
    scanf("%d", &a);
    int b;
    printf("Enter the exponent : ");
    scanf("%d", &b);
    printf("%d raised to the power %d is : %d\n", a, b, power(a,b));
    return 0;
}

int power(int a, int b)
{
    if(b == 1) return a;
    return a * power(a, --b);
}