#include <stdio.h>

int factorial(int a);
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int r;
    printf("Enter the value of r : ");
    scanf("%d", &r);
    int ncr = factorial(n) / (factorial(r) * factorial(n-r));
    printf("The nCr of the values is : %d\n", ncr);
    return 0;
}

int factorial(int a)
{
    int fac = 1;
    for(int i = a; i >= 2; i--) fac *= i;
    return fac;
}