#include <stdio.h>

int sum(int n, int a);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Sum of 1 to n is : %d\n", sum(n, 0));
    return 0;
}

// int sum(int n) // without using extra parameter
// {
//     if(n == 1 || n == 0) return n;
//     return n+sum(n-1);
// }

int sum(int n, int a) // using an extra parameter
{
    if(n == 1) return 1;
    sum((n-1), a+n);
    return a;
}