#include <stdio.h>

int main()
{
    float a,b;
    printf("Enter the first number : ");
    scanf("%f", &a);
    printf("Enter the second number : ");
    scanf("%f", &b);
    char operator;
    printf("Enter the operator to be used : ");
    scanf(" %c", &operator);
    switch(operator)
    {
        case '+':
        printf("Sum of the numbers is : %.6f", a+b);
        break;
        case '-':
        printf("Difference of the numbers is : %.6f", a-b);
        break;
        case '*':
        printf("Multiplication of the numbers is : %.3f", a*b);
        break;
        case '/':
        printf("Division of the numbers is : %.3f", a/b);
        break;
        default:
        printf("Error Invalid operator");
    }
    printf("\n");
    return 0;
}