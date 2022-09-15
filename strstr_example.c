#include <stdio.h>
#define _GNU_SOURCE
#include <string.h>

#include "string_utils.h"

//string_utils.h
/*
#ifndef STRING_UTILS_H_
#define STRING_UTILS_H_

void trim(char str[]);

#endif
*/

//string_utils.c
/*
#include <string.h>

#include "string_utils.h"

void trim(char str[]) {
    int l = strlen(str);
    if (str[l-1] == '\n') {
        str[l-1] = 0;
    }
}
*/

int main()
{
    char haystack [128] = {0};
    char needle [128] = {0};

    printf("Enter a string: ");
    fgets(haystack, 128, stdin);
    trim(haystack);

    printf("Enter a string: ");
    fgets(needle, 128, stdin);
    trim(needle);

    //use strcasestr in order to ignore case when searching for a string
    if (strcasestr(haystack, needle)) 
    {
        printf("Found \"%s\" in \"%s\"\n", needle, haystack)
    }

    return 0;
}