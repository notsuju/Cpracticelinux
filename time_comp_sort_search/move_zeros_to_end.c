#include <stdio.h>
#include <limits.h>
#include "suju.h"

#define ARRAY_SIZE 9
int main()
{
    int arr[ARRAY_SIZE] = {5,0,2,0,0,4,1,3,0};
    int no_of_swap = 0;
    int last_index_swaped = ARRAY_SIZE - 1;
    for(int i = 0; i < ARRAY_SIZE - 1; i++)
    {
        no_of_swap = 0;
        for(int j = 0; j < last_index_swaped; j++)
        {
            if(arr[j] == 0)
            {
                swap(&arr[j], &arr[j+1]);
                no_of_swap++;
            }
        }
        if(no_of_swap == 0) break;
        last_index_swaped--;
    }

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}