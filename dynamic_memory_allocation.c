#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter the no. of words in your name : ");
    scanf("%d", &n);
    // Dynamically Allocating memory for array(NOT USING VLA)
    // int *arr = (int*)calloc(n * sizeof(int));
    // for(int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    // Dynamically taking string input through the user.
    n = n + 1; // as fgets only reads till n - 1 and leaves one for '\0'
    getchar(); // removes '\n' from input buffer
    char *name = (char*)malloc(n*sizeof(char));
    printf("Enter your name : ");
    fgets(name, n, stdin); // only reads till n - 1
    size_t len = strlen(name);
    if(len > 0 && name[len - 1] == '\n') name[len - 1] = '\0';
    printf("Your name is : %s", name);
    printf("\n");
    free(name);
    name = NULL;

    // Re-allocation is done by using ptr = realloc(ptr, 10 * sizeof(int));
    // Note the data is not lost during reallocation just memory increases
    return 0;
}