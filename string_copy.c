#include <stdio.h>
#include <string.h>

#define BUF_SIZE 512

int main() {
    //set up with one array defined (we give it a string)
    char s1[] = "This is some random string.";
    //make a huge array buffer that we can store a copy into
    char buffer[BUF_SIZE] = { 0 };

    /*
    call string copy
    strcpy accepts two arguments:
        1. Destination - where are you copying to?
        2. Retrieval location - where are you copying from?
    Copy s1 to buffer
    */
    strcpy(buffer, s1);

    printf("s1: \"%s\"\n", s1);
    printf("buffer: \"%s\"\n", buffer);

    // Copy 10 characters from s1 to buffer
    memset(buffer, 0, sizeof(buffer));
    //you can have a 3rd argument which says when to stop
    strncpy(buffer, s1, 10);

    printf("buffer: \"%s\"\n", buffer);

    return 0;
}