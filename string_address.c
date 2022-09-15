#include <stdio.h>

int main() 
{   
    char str[] = "whatever";

    /*
    whenever we are dealing with addresses 
    the proper format specifier is going to be %p
    */

    //    int a = 10; 

    /*
    if we refer to int a by its name then we are 
    are referring to its value which is 10. If we refer to a's
    address then we use &a which means address of a.
    */

    /*
    In this case if you refer to an array then you are
    simply referring to an address so we just put str
    
    printf("Address of str is %p\n", str);
    return 0;
    */
    
    //if we want to point out the actual character then we would type
    printf("Address of str is %p -> %c\n", str, str[0]);
    return 0;
   
}