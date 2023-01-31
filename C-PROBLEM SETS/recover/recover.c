#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");

    if (file == NULL)
    {
        printf("Invalid\n");
        return 1;
    }
    // store blocks of 512 bytes in an array
    unsigned char buffer[512];

    // file pointer for recovered images
    FILE *output_file = NULL;


    char *filename = malloc(8 * sizeof(char));

    int count_image = 0;

    while (fread(buffer, sizeof(BYTE), 512, file))
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] && 0xf0 == 0xe0))
        {
            sprintf(filename, "%03.i.jpg", count_image);
            output_file = fopen(filename, "w");
            count_image++;
        }
        if (output_file != NULL)
        {
            fwrite(buffer, sizeof(BYTE), 512, output_file);
            fclose(output_file);
            fclose(file);


        }

    }

    free(filename);



    return 0;

}
