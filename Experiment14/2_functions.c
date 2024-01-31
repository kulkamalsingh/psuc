// 2. Write C program to write data into any file using fputc(), gputs(), and fprintf() functions.

#include <stdio.h>

int main()
{
    FILE *file;
    char filename[] = "output.txt"; // File to write into

    // Open the file in write mode
    file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    // Using fputc()
    printf("Writing data into file using fputc():\n");
    printf("--------------------------------------\n");
    char ch;
    printf("Enter characters to write into the file (Press Ctrl+D to stop):\n");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, file);
    }
    printf("\nData written using fputc() successfully.\n\n");

    // Close and reopen the file in append mode
    fclose(file);
    file = fopen(filename, "a");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    // Using fputs()
    printf("Writing data into file using fputs():\n");
    printf("--------------------------------------\n");
    char sentence[100];
    printf("Enter a sentence to write into the file:\n");
    getchar(); // Consume the newline character left by previous getchar()
    fgets(sentence, sizeof(sentence), stdin);
    fputs(sentence, file);
    printf("Sentence written using fputs() successfully.\n\n");

    // Using fprintf()
    printf("Writing data into file using fprintf():\n");
    printf("----------------------------------------\n");
    int num1, num2;
    printf("Enter two numbers to write into the file:\n");
    scanf("%d %d", &num1, &num2);
    fprintf(file, "The sum of %d and %d is %d\n", num1, num2, num1 + num2);
    printf("Numbers written using fprintf() successfully.\n\n");

    // Close the file
    fclose(file);

    return 0;
}
