#include <stdio.h>
#include <string.h>

#include "string_utils.h"

int main() {
    char buffer[128] = { 0 };

    //have the user enter an assumed csv file name
    printf("Enter a line of CSV: ");
    fgets(buffer, 128, stdin);
    trim(buffer);

    /*
    strtok will take the input of what ever your initial line is
    2nd argument is a delimeter
    it will take your line and read thru until it hits that delimeter
    in this case a comma where it will then return a the first word and
    an address
    */

    char *token = strtok(buffer, ",");

    /*
    while there is still an attribute being tokenized from our string
    lets print out the token and then we will try to get the next token
    and if there is no new token to get then it will return a zero
    */
   
    while (token) {
        printf("token = %s\n", token);

        token = strtok(NULL, ",");
    }


    return 0;
}