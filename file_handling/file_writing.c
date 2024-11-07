#include <stdio.h>

int main()
{
    char buffer[100];

    // Ask for user input
    printf("Enter the text to be written(ctrl + D to finish input on Unix or ctrl + Z for windows): "); // ctrl + d sends a EOF signal

    FILE *ptr = fopen("writing_test.txt", "w");
    
    // Check if file was opened successfully
    if (ptr == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    // Read input from stdin (keyboard) into the buffer
    while (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        fputs(buffer, ptr);
    }

    // Close the file
    fclose(ptr);

    // Inform the user that the text has been written successfully
    printf("\nText has been written to 'writing_test.txt'.\n");

    return 0;
}