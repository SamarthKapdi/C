// Demonstrates writing to a file in C
#include <stdio.h>

int main()
{
    FILE *fp = fopen("writefile.txt", "w");
    if (fp == NULL)
    {
        printf("Failed to open file for writing!\n");
        return 1;
    }
    fprintf(fp, "Writing this line to file.\n");
    fclose(fp);
    return 0;
}
