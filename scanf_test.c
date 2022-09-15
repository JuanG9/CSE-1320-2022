#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {

    /*
    creating 2 variables to use
    a and b below are local in scope to int main()
    we now have memory for these two integers
    */

    int a = 0;
    int b = 0;

    //asking the user to input 2 integers
    printf("Enter 2 integers: ");

    /*
    scanf only requires format specifiers
    scanf needs to know where to store this information a, b, but
    we need & to say exactly where to go so we type it as &a, &b.
    & act as an address
    */

    scanf("%d %d", &a, &b);

    //store the result of this sum and call the add function
    int result = add(a, b);

    //the first %d = a, the second %d = b, the third %d = result
    printf("%d + %d = %d\n", a, b, result);

    return 0;
}