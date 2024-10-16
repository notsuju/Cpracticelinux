#include <stdio.h>
#include <limits.h>
#include "suju.h"

#define ARRAY_SIZE 5
int main()
{
    int arr[ARRAY_SIZE] = {7, 5, 0, 1, 2};
    // for(int i = 1; i < ARRAY_SIZE; i++)
    // {
    //     for(int j = i; j > 0; j--)
    //     {
    //         if(arr[j] < arr[j-1])
    //         {
    //             swap(&arr[i], &arr[i-count]);
    //         }
    //     }
    // }

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}