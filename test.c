#include <stdio.h>
#include <string.h>

int main() {
    char ch;

    printf("Enter a single character: ");
    scanf(" %c", &ch); // Note the space before %c to skip any whitespace

    printf("You entered: %c\n", ch);
    return 0;
}

