#include <stdio.h>

int main() {

    //assign a value to a variable
    int a = 10;

    //if we want to change the value later on...
    //we simply say now a = 12 shown below.
    a = 12;

        //this means we are assigning a + 15 to a
        //meaning taking the value of a and adding 15 to it
        //this now stores a as 27, instead of 12
    //a = a + 15; 

        //this means the same thing as above!
        //this is just another way of coding it
    //a += 15;

        //reads the value first then updates it
    //a++; this increments a by one
    //a--; you can also use minus minus to decrease by one
    
        //this updates the value first and then reads it
    //++a;

        //if a = 12 then this will update a to 13 first and then read and print it
    printf("%d\n", ++a);

        //if a = 12 then a++ will read and print 12 first and then add 1
    //printf("%d\n", a++);

        //you only need this function if you use printf("%d\n", a++);
        //you need this so that you update and print the proper number
    //printf("%d\n", a);

    return 0;
}