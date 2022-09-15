#include <stdio.h>

//Use when making a string trim function
#include <string.h>

//handy function from the string library
void trim(char str[]) {
    
    //get the length of the string
    int l = strlen(str);

    /*
    now, check if this character at the very end of our string at l-1 (we use this because we are dealing with zero based indexing. meaning 
    our first index is a zero and the next is one. This means if you try index character 128 your actually at the 129th character. 
    This means it doesnt actually exist in your array and that can be dangerous because now we are getting into memory that doesnt belong to us)
    is a new line character?
    */

    if (str[l-1] == '\n') {

        //if it is lets take that character and replace it with a zero.
        str[l-1] = 0;
    }
}

int main() {
 
     /*
    Establish some memory by method of an array.
    We want 128 characters
    A character is a single byte
    Example: 
    char str[128] = {0}; HAS 128 bytes
    */

    char str[128] = {0};

    //Ask the user to enter a string
    printf("Enter a string: ");

    /*
    f get s is a built in function that reads data and is available in <stdio.h>
    fgets() requires 3 arguments. 
    The arguments are as follows:
    
    First (buffer)- where are you reading this data? We are reading it into our new character array so that we can store is somewhere
    Second (128)- How many bytes am I allowed to read before I need to stop? Our array is 128 so lets put 128 for safety...
    Third (stdin)- Is a file pointer. We are asking where are we getting this information? 
    */
    fgets(str, 128, stdin); //fgets will always read to one less than the second argument

    //trim function checks to see if that last character was a new line and if it is, we'll erase it
    trim(str);

    /*
    Use %s to print a string. %s is a format specifier for a string
    This runs a while loop and says while this character is not equal to the zero byte just print it out and just go over and over again
    */

    /*
    since we have a format specifier we have to give it a value in order to put into that holder.
    So the value we will give is our str since thats where we read our original data.
    */

    printf("\"%s\"\n", str);
    
    return 0;
}