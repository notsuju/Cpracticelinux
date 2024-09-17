#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    printf("Enter the number to be checked : ");
    scanf("%d", &n);

    int a[7] = {1,2,3,4,5,6,7};
    int index;
    bool check = false;
    for(int i = 0; i < 7; i++)
    {
        if(a[i] == n)
        {
            check = true;
            index = i;
        }
    }
    if(check) printf("The number is present in the array at index %d\n", index);
    else printf("The number is not present in the array\n");
    return 0;
}