#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    int x = 0;
    int c = 0;
    while(a != 0)
    {
        x += a%10; //adds the last digit
        a /= 10; // removes the last digit
        c++;
    }
    printf("The number is %d digits long\n", c);
    printf("The sum of the digits of number is: %d\n", x);
    return 0;
}