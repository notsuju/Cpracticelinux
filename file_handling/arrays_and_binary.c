#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    int numbers[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(numbers) / sizeof(numbers[0]);

    // Write the entire array to the binary file
    fwrite(numbers, sizeof(int), size, file);

    fclose(file); // Close the file
    return 0;
}
