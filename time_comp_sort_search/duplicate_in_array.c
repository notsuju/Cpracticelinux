#include <stdio.h>
#include <limits.h>

#define ARRAY_SIZE 7
// #define MAX_SIZE 10
int main()
{
    int a[ARRAY_SIZE] = {1,2,2,3,4,5,6};

    // Method 1 with time complexity big O(n^2) & space complexity O(1)
    // for(int i = 0; i < ARRAY_SIZE - 1; i++)
    // {
    //     for(int j = i+1; j < ARRAY_SIZE; j++)
    //     {
    //         if(a[i] == a[j])
    //         {
    //             printf("%d is the duplicate in array\n", a[i]);
    //         }
    //     }
    // }

    // Method 2 with time complexity big O(n) & space complexity of O(n)
    // int b[MAX_SIZE] = {0};
    // for(int i = 0; i < ARRAY_SIZE; i++)
    // {
    //     if(b[a[i]] == 1)
    //     {
    //         printf("%d is the duplicate element\n", a[i]);
    //         break;
    //     }
    //     b[a[i]]++;
    // }

    // Method 3 with time complexity of big O of O(n) & space complexity of O(1)
    int n = ARRAY_SIZE - 1;
    int sum_of_numbers = (n*(n+1)) / 2;
    int sum_of_array = 0;
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        sum_of_array += a[i];
    }
    printf("Duplicate number in array is : %d\n", sum_of_array - sum_of_numbers);

    return 0;
}