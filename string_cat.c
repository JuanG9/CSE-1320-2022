#include <stdio.h>
#include <string.h>

int main() {
    char s1[128] = "This is the first string.";
    char s2[128] = "This is the second string.";

    /*
    taking string 2 and putting it at the end of s1
    this will put all this information in s1 so,
    ensure s1 is large enough to hold all of s2 and s1
    */

    // concatenate two strings
    strcat(s1, s2);

    printf("%s\n", s1);

    return 0;
}