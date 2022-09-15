#include <stdio.h>

//function is_odd with a given integer value
int is_odd(int a) {
    //specifically modulus(modulo) works with integer values 
    //this is read as, "if a mod 2 = 1" then it must be odd because the remainder is not zero!
    if (a % 2 == 1) {
        return 1;
        //If this returns zero then false meaning the integer given was even not odd. 
        //If not zero then true meaning the integer given was odd.
    } else {
        return 0;
    }
    //return a % 2; is the same thing as prior 5 lines of code
}

int main() {

    int a = 10;
    //if you were to write if(a = 10) that is an assignment not an if statement
    /*
    if you want to make code read it as, "if a = 10" then you need to code,
    "if (a == 10)". The two == signs make this happen.
    */
    if (a == 10) {

    }

    return 0;
}