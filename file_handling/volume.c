#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

const int HEADER_SIZE = 44;
typedef uint8_t BYTE;
int main(int argc, char *argv[])
{
    if(argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav Multiplier");
        return 1;
    }
    
    float multiplier = atof(argv[3]);

    FILE *input = fopen(argv[1], "r");
    if(input == NULL)
    {
        printf("Error opening the file");
        return 1;
    }
    FILE *output = fopen(argv[2], "w");
    if(output == NULL)
    {
        printf("Error opening the file");
        return 1;
    }
    
    // Copying header files that contains data about file
    BYTE header[HEADER_SIZE];
    fread(header, HEADER_SIZE, 1, input);
    fwrite(header, HEADER_SIZE, 1, output);
    
    // File has samples of 2 byte each so multiplying each sample with a multiplier will change the volume of the track
    int16_t buffer;
    while(fread(&buffer, sizeof(int16_t), 1, input))// Reading 2 byte sample at a time, fread returns the number of items read in this case 1 and if fread returns 0 the loop will break and returning 0 means that there's not enough bytes to read
    {
        buffer *= multiplier;
        fwrite(&buffer, sizeof(int16_t), 1, output);
    }

    // Closing the files
    fclose(input);
    fclose(output);
    return 0;
}
