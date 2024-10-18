#include <stdio.h>
#include <limits.h>
#include "suju.h"

#define ARRAY_SIZE 5
void bubble_sort(int arr[], int size); // sorts the array
int array_to_number(int crr[], int size); // turns array into a number
void similar_fix(int brr[], int n); // if the no. is 3455 then turns it to 3545
int main()
{
    int arr[ARRAY_SIZE] = {4,5,5,5,0};

    // sorting the array
    bubble_sort(arr, ARRAY_SIZE);

    // Finding the first smallest number
    int first_smallest = array_to_number(arr, ARRAY_SIZE);
    printf("The first smallest number is : %d\n", first_smallest);

    // Fixing the similar element issue
    similar_fix(arr, ARRAY_SIZE);

    // Finding the second smallest element
    int second_smallest = array_to_number(arr, ARRAY_SIZE);
    printf("Second smallest number is : %d\n", second_smallest);

    // Printing the result
    printf("Sum of numbers is : %d\n", first_smallest + second_smallest);
    return 0;
}
// Bubble sort
void bubble_sort(int arr[], int size)
{
    int last = size - 1;
    int no_of_swaps = 0;
    for(int i = 0; i < size - 1; i++)
    {
        no_of_swaps = 0;
        for(int j = 0; j < last; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                no_of_swaps++;
            }
        }
        if(no_of_swaps == 0) break;
        last--;
    }
    return;
}

// Fixing similar element
void similar_fix(int brr[], int n)
{
    if (n <= 1) return; // if all the elements are same
    if (brr[n - 1] != brr[n - 2])
    {
        swap(&brr[n - 1], &brr[n - 2]);
        return;
    }
    similar_fix(brr, n - 1);
    return;
}

// Array to number
int array_to_number(int crr[], int size)
{
    int number = 0;
    for(int i = 0; i < size; i++)
    {
        number += crr[i];
        if(i == size - 1) break;
        number *= 10;
    }
    return number;
}