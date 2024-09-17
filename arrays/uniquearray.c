#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define ARRAY_SIZE 7

int main()
{
    int a[ARRAY_SIZE] = {1,3,2,3,1,2,4};
    for(int i = 0; i < 7; i++)
    {
        bool flag = false;
        for(int j = 0; j < 7; j++)
        {
            if(a[i] == a[j] && i != j)
            {
                if(flag) continue;
                flag = true;
            }
        }
        if(flag==false)
        {
            printf("%d is the unique number in the given array\n", a[i]);
            break;
        }
    }
    return 0;
}

// chatgpt version using an array as counting the times a element comes in the array
// #include <stdio.h>
// #include <limits.h>

// #define ARRAY_SIZE 7
// #define MAX_VALUE 10 // Should be more than the maximum value in array

// int main()
// {
//     int a[ARRAY_SIZE] = {1, 3, 2, 3, 1, 2, 4};
//     int count[MAX_VALUE] = {0}; // Initialize counting array with 0s

//     // Count occurrences of each number
//     for(int i = 0; i < ARRAY_SIZE; i++)
//     {
//         count[a[i]]++;
//     }

//     // Find and print the unique number
//     for(int i = 0; i < ARRAY_SIZE; i++)
//     {
//         if(count[a[i]] == 1)
//         {
//             printf("%d is the unique number in the given array\n", a[i]);
//             break;
//         }
//     }

//     return 0;
// }