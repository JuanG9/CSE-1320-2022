#include <stdio.h>

//function called search an aray
//take input, (original array, how many elements the array has, search term)

int search_array(int arr[], int size, int key) {

    //start at the begining of the array and iterate one by one until we find what we want and return the index to that "thing"
    //for loop up to size
    for (int i = 0; i < size; i++) {
        //if key is equal to array at i then return i
        if(key == arr[i]) {
            return i;
        }
    }

    //if it gets all the way through this loop and doesnt find anything i want it to return something like -1
    //-1 indicates an invalid index
}

int main() {
    int arr[32] = {10, 5, 3, 6, 7, 3, -234, -234, 56, 56};
    int key = 0;

    printf("Enter a key: ");
    scanf("%d", &key);

    int result = search_array(arr, 10, key);

    if (result != -1) {
        printf("Found %d at index %d\n", key, result);
    } else {
            printf("%d not found.\n", key);
    }

    return 0; 
}

/* 
Compile in terminal by entering gcc [file name]
compile to check there are no warning or errors by gcc [filename] -Wall
execut the program by ./a.out
"Enter a key: " - some random number
some random number not found
execute the program again by ./a.out to try a different number, in this case we know we have 7 in our code
"Enter a key: " - 7
Found 7 at index 4
this mean we counted index 0 = 10, index 1 = 5, index 2 = 3, index 3 = 6, index 4 = 7, and so on and so on
*/