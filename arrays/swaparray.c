#include <stdio.h>

void swap(int a[]) // array automatically are passed as reference no need for pointers basically the address of the first element of the array is being sent to it.
{
    int temp = a[0];
    a[0] = a[1];
    a[1] = temp;
    return;
}
int main()
{
    int a[2] = {1,4};
    swap(a);
    printf("%d is a and %d is b\n", a[0], a[1]);
    return 0;
}