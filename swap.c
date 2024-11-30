#include <stdio.h>
/**
 * @param {*} a
 * @param {*} b
 * @returns swaps a and b by XOR method
 * @example sum(3, 4)
 */

void swap(int *a, int *b);
int main()
{
    int a = 7;
    int b = 1;
    swap(&a, &b);
    printf("a is : %d \nb is : %d\n", a, b);
    return 0;
}

void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
    return;
}