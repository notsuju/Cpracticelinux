#include <stdio.h>

int main() {
    char buffer[100];

    // Ask for user input
    printf("Enter the text to be written: ");

    // Read input from stdin (keyboard) into the buffer
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;  // Exit if reading input fails
    }

    // Open the file for writing ("w" mode)
    FILE *ptr = fopen("writing_test.txt", "w");
    
    // Check if file was opened successfully
    if (ptr == NULL) {
        printf("Error opening file.\n");
        return 1;  // Exit if file opening fails
    }

    // Write the buffer content to the file
    if (fputs(buffer, ptr) == EOF) {
        printf("Error writing to file.\n");
        fclose(ptr);  // Close the file before exiting
        return 1;  // Exit if writing to file fails
    }

    // Close the file
    fclose(ptr);

    // Inform the user that the text has been written successfully
    printf("Text has been written to 'writing_test.txt'.\n");

    return 0;
}