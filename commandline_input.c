#include <stdio.h>

int main(int argc, char *argv[]) // argc for counter and v for vector
{
    printf("The number of arguments is : %d\n", argc);
    for(int i = 1; i < argc; i++)
    {
        printf("The %d argument is : %s\n", i, argv[i]);
    }
    return 0;
}