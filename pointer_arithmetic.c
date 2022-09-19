#include <stdio.h>

int main()
{
    int arr[4] = {1, 2, 3, 4};
    int *a_ptr = arr;

    for (int i = 0; i < 4; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
        printf("*a_ptr + %d) = %d\n", i, *(a_ptr + i));
    }

    return 0;
}