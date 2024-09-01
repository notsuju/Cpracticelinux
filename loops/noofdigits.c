#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    int c = 0;
    while(a != 0)
    {
        a /= 10;
        c++;
    }
    printf("The number is %d digits long\n", c);
    return 0;
}