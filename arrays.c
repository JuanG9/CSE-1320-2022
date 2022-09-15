#include <stdio.h>

int main() {

    //int arr[]; ---> needs explicit size or an initializer
    //this will give us an error because we didnt specify the size of the array
    //int arr[] = {1, 2, 3, 4, 5}; array of size 5 because it has 5 assigned values
    //int arr[128]; creates 128 spaces for integers
    //int arr[128]; creates 128 spaces for integers and then its gonna set the 1st 5 as 1, 2, 3, 4, 5

    //type identifier [size];
    int arr[128];

    //access the first element
    int value = arr[0];

    //create an array of size 10
    int a[10];

    //with values of size 1 using a for loop
    for (int i = 0; i < 10; i++) {
        a[i] = 1;
    }

    //type identifier [size];
    char word[4]; {'w', 'o', 'r', 'd';}

    //left uninitialized, the values of an array are unspecified
    int array[5]; 

    for (int i = 0; i < 10;  i++) {
        printf("%d", array[i]); 
    }

    /*
    #include <stdio.h>

    int main(){
       int arr[32] = {0};
       printf("%ld\n", sizeof(arr));

       return 0;
    }
    */

    //in your terminal you would type
    //ls
    //gcc arrays.c
    //./a.out
    //it returns -> 128 we created an array of 32 integers. each integer is 4 bytes. 32 * 4 = 128
    //instead use printf("%d\n", sizeof(arr) / sizeof(arr[0]));
    //size of array divided by the size of the underlying data type.
    //recompile
    //128/4=32
    //32 is the length of the array

    return 0;

}