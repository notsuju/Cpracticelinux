#include <stdio.h>

int highest_factor(int x, int y);
int main()
{
    int a,b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("The highest common factor is : %d\n", highest_factor(a,b));
    return 0;
}

int highest_factor(int x, int y)
{
    int min = (x > y)? y:x;
    for(int i = min; i >= 1; i--)
    {
        if(x%i == 0 && y%i == 0)
        {
            min = i;
            break;
        }
    }
    return min;
}

// int highest_factor(int x, int y) {
//     // Ensure x is greater than or equal to y
//     if (y > x) {
//         int temp = x;
//         x = y;
//         y = temp;
//     }

//     // Euclidean algorithm
//     while (y != 0) {
//         int remainder = x % y;
//         x = y;
//         y = remainder;
//     }
//     return x;
// }

