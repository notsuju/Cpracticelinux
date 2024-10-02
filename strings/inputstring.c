#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];
    printf("Enter your name : ");
    fgets(a, sizeof(a), stdin);
    size_t len  = strlen(a);
    if(a[len-1] == '\n') a[len-1] = '\0';
    printf("%zu \n", len);
    printf("Your name is : %s\n", a);
    return 0;
}