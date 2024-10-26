#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Error: Usage ./caesar KEY\n");
        return 1;
    }
    key = atoi(argv[1]);
    return 0;
}