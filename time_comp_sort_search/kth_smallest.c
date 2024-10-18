#include <stdio.h>
#include <limits.h>
#include "suju.h"
// finds the kth smallest element int the array(run by doing: gcc kth...c suju.c -o kth...)
#define ARRAY_SIZE 7
int main()
{
    int arr[ARRAY_SIZE] = {45, 23, 12, 89, -9, 0, 1};
    int k = 5;
    int min_index = -1;
    for(int i = 0; i < k; i++)
    {
        min_index = i;
        for(int j = i + 1; j < ARRAY_SIZE; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if(min_index == i) continue;
        swap(&arr[i], &arr[min_index]);
    }
    printf("The %d smallest element in the array is : %d\n", k,arr[k - 1]);
    return 0;
}