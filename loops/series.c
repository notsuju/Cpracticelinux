#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    int sum = 0;
    for(int i = 1; i <= a; i++)
    {
        if(i % 2 == 0) sum -= i;
        else sum += i;
    }
    printf("Sum of the series is : %d\n", sum);
    return 0;
}