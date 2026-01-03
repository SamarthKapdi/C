// Demonstrates creating a file in C
#include <stdio.h>

int main()
{
    FILE *fp = fopen("newfile.txt", "w");
    if (fp == NULL)
    {
        printf("Failed to create file!\n");
        return 1;
    }
    fprintf(fp, "File created successfully!\n");
    fclose(fp);
    return 0;
}
