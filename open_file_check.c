#include <stdio.h>
#include <string.h>

int main()
{
    char filename[128] = {0};
    printf("Enter a filename: ");
    fgets(filename, 128, stdin);
    filename[strlen(filename) - 1] = 0;

    FILE *fp = fopen(filename, "r");

    if(fp == NULL) 
    {
        printf("Could not open file.\n");
    }

    return 0;
}