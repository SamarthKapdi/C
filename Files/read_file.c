// Demonstrates reading from a file in C
#include <stdio.h>

int main()
{
    FILE *fp = fopen("writefile.txt", "r");
    char buffer[100];
    if (fp == NULL)
    {
        printf("Failed to open file for reading!\n");
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        printf("Read: %s", buffer);
    }
    fclose(fp);
    return 0;
}
