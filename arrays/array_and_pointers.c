#include <stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};
    printf("%d\n", *(a+1)); // 'a' is basically a pointer to the first element of the array
    printf("%d\n", a[1]);
    return 0;
}