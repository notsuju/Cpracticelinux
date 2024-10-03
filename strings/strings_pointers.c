#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello world!";
    char *ptr = str;
    // char *ptr = "Hello world!";
    *(ptr+1) = 'm';
    // *(str+1) = 'm';

    printf("%s\n", ptr);
    printf("%s\n", str);
    // printf("%p\n", ptr);
    // printf("%p\n", str);
    return 0;
}