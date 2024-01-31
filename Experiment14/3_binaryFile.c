// 3. Write C program to copy character or binary file.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *source_file, *destination_file;
    char source_filename[] = "source.txt";           // Source file
    char destination_filename[] = "destination.txt"; // Destination file

    // Open the source file for reading
    source_file = fopen(source_filename, "rb");
    if (source_file == NULL)
    {
        printf("Error opening source file.\n");
        return 1;
    }

    // Open the destination file for writing
    destination_file = fopen(destination_filename, "wb");
    if (destination_file == NULL)
    {
        printf("Error opening destination file.\n");
        fclose(source_file);
        return 1;
    }

    // Copying content character by character
    int character;
    while ((character = fgetc(source_file)) != EOF)
    {
        fputc(character, destination_file);
    }

    // Close the files
    fclose(source_file);
    fclose(destination_file);

    printf("File copied successfully.\n");

    return 0;
}
