#include <stdio.h>

int fibonacci(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("The %dth fibonacci number is : %d\n", n, fibonacci(n));
    return 0;
}

int fibonacci(int n)
{
    if(n == 1 || n == 2) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}