#include <stdio.h>
#include <string.h>

int main()
{
    char s[25];
    printf("Enter your name : ");
    if (fgets(s, sizeof(s), stdin) != NULL) // checks if there is a error in reading ? 
    // FGETS AUTOMATICALLY ADDS A \n in the end of the string
    {
        size_t x = strlen(s); // gets the length of the s
        if (x > 0) s[x - 1] = '\0'; // checks if the length is more than 0 and if it is then replaces the '\n' with '\0'
        printf("%zu\n", x);
    }
    printf("Your name is : %s\n", s);
    return 0;
}
