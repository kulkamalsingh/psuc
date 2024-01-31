// 1. Write C program to read file using fgetc(), fgets(), and fscanf() functions.

#include <stdio.h>

int main()
{
    FILE *file;
    char filename[] = "sample.txt"; // Assuming the file is named "sample.txt"
    char buffer[100];               // Buffer for fgets
    char c;                         // Character for fgetc
    char word[100];                 // String for fscanf

    // Open the file
    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    // Using fgetc()
    printf("Reading file using fgetc():\n");
    printf("---------------------------\n");
    while ((c = fgetc(file)) != EOF)
    {
        printf("%c", c);
    }
    printf("\n\n");

    // Reset file pointer to beginning
    rewind(file);

    // Using fgets()
    printf("Reading file using fgets():\n");
    printf("---------------------------\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer);
    }
    printf("\n");

    // Reset file pointer to beginning
    rewind(file);

    // Using fscanf()
    printf("Reading file using fscanf():\n");
    printf("---------------------------\n");
    while (fscanf(file, "%s", word) != EOF)
    {
        printf("%s ", word);
    }
    printf("\n");

    // Close the file
    fclose(file);

    return 0;
}
