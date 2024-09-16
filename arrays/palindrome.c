#include <stdio.h>

int main()
{
    size_t len = 5;
    int a[5] = {1,2,3,2,1};
    int i = 0,j = len-1;
    while(i <= j)
    {
        if(a[i] != a[j])
        {
            printf("The array is not a palindrome\n");
            break;
        }
        i++;j--;
    }
    if(len/2 + 1 == i) printf("The given array is a palindrome\n");
    return 0;
}