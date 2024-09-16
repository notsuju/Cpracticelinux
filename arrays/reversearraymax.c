#include <stdio.h>

void reverse(int a[]);
int main()
{
    int a[6] = {1,2,3,4,5,6};
    // THIS IS BY USING A EXTRA ARRAY

    // int b[7];
    // for(int i = 0; i < 7; i++)
    // {
    //     b[i] = a[6-i];
    // }
    // for(int i = 0; i < 7; i++)
    // {
    //     a[i] = b[i];
    //     printf("%d ", a[i]);
    // }
    // printf("\n");

    // without using an extra array for reversing the array.

    reverse(a);
    for(int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

void reverse(int a[]) // we are basically swapping the values of a[i] and a[j] by using the concept of temp variable
{
    int i = 0;
    int j = 5;
    while(i < j)
    {
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++,j--;
    }
    return;
}