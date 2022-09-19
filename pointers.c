#include <stdio.h>

int main() 
{
    int a = 0; 
    /*
    if you want to create a pointer to a
    you can do this by first specifying with an asterisk,
    this indicates that it is a pointer, and then name it something like
    a_ptr and its value has to be an address which isnt zero.
    NOTE: Normally if you want to initialize your pointers you want to 
    initialize it to null.
    Here we will assign this the address of a. (valid assignment)
    The address that is being stored in this pointer is its value
    */

    //this reads right to left as this is a pointer to an integer
    int*a_ptr = &a; 

    /*
    print the address of a and then its contents
    this will give the address and at that address is the value 0
    int a = 0;
    printf('%p -> %d\n", &a, a)
    */

    /*
    Since we know that a pointer contains the address of a we can just put
    a_ptr 
    printf("%p -> %d\n", a_ptr, a);
    */

    /*
    if you didnt have a you could use a different operator called the 
    d referencing operator, you put an asterisk before your address
    *a_ptr
    printf("%p -> %d\n", a_ptr, *a_ptr);
    */

    /*
    we can take this a step further with this pointer
    a pointer needs spaced so it can store the value of an address
    printf("%p -> %p -> %d\n", &a_ptr, a_ptr, *a_ptr);
    */
    printf("%p -> %p -> %d\n", &a_ptr, a_ptr, *a_ptr);

    return 0;
}