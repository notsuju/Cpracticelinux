#include <stdio.h>
#include <string.h>

int main()
{
    char a[6] = {'a','t','l','a','s','\0'};
    char ch = '\0';
    char b[] = "Hello";
    int len = strlen(b);
    printf("%d ", len);
    // printf("%s\n", b);

    puts("Hello everyone");
    // printf("%c\n", ch);
    // printf("%c\n", a[3]);
    // printf("%p\n", &a[0]);
    // printf("%p\n", &a[1]);
    // printf("%p\n", &a[2]);
    return 0;
}