#include <stdio.h>

void swap(int *a, int *b);
int main()
{
    int a,b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    // int temp = a;
    // a = b;
    // b = temp;
    swap(&a,&b);
    printf("a is : %d\n", a);
    printf("b is : %d\n", b);
    return 0;
}

void swap(int *x, int *y)
{
    *x = *x + *y; //without 
    *y = *x - *y; //using extra
    *x = *x - *y; //variable
    // int temp = *x;
    // *x = *y;
    // *y = temp;
    return;
}