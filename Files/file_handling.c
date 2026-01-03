// Demonstrates file handling in C (create, write, read)
#include <stdio.h>

int main()
{
    FILE *fp;
    char data[50];

    // Write to file
    fp = fopen("sample.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fprintf(fp, "Hello, file handling in C!\n");
    fclose(fp);

    // Read from file
    fp = fopen("sample.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file for reading!\n");
        return 1;
    }
    while (fgets(data, sizeof(data), fp) != NULL)
    {
        printf("Read from file: %s", data);
    }
    fclose(fp);

    return 0;
}
