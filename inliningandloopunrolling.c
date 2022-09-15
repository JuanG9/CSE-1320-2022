#include <stdio.h>

//function called add
int add(int a, int b) {

    //returns a + b
    return a + b;
}

int main() {

    //for loop that goes up to 1000
    for (int i = 0; i < 1000; i++)  {

        /*
        this goes to the for loop and executes, then jumps back to where the for loop started (memory jump)
        another big jump occurs when it calls that function it has to go to the part of memory wehre it stores
        the execution code for add.
        ***jumps in memory cost at least one cycle of the processors***
        This is essentially reducing efficiency by 50%
        */

        //inlining would just require that you take the below function out and replace it with something like (a + b;)
        add(i, i+1);
        /*
        loop unrolling would actually take the loop out and unroll it where you would have
        i + i + 1;
        i + i + 1;
        i + i + 1;
        i + i + 1;
        i + i + 1;
        i + i + 1;
        i + i + 1; 
        and do this up to 1000 times as this is unrolling the for loop.
        */


    }

}