#include <stdio.h>

int main() 
{   
    char str[] = "this is a test.";
    
    //compute the length of the string.
    int length = 0;
    for(; str[length] != 0; length ++);
    
    printf("There are %d characters in \"%s\"\n", length, str); 
    {
        /* code */
    }
    
    return 0;
}