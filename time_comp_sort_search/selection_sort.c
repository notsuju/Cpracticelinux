#include <stdio.h>
#include <limits.h>

#define ARRAY_SIZE 8
void swap(int* a, int* b);
int main()
{
    int arr[ARRAY_SIZE] = {7,2,5,4,1,6,0,3};

    // Selection sort algorithm
    int min_index = 0;
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        min_index = i; // reseting min_index to the next element I did I *mistake* of not reseting it
        for(int j = i + 1; j < ARRAY_SIZE; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if(min_index == i) continue;
        swap(&arr[min_index], &arr[i]);
    }

    // Printing the array
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}