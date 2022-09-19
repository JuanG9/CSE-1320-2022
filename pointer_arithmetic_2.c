#include <stdio.h>

int main()
{
    char arr[] = "testing";
    char *a_ptr = arr;

    for (int i = 0; arr[i] != 0; i++)
    {
        printf("*a_ptr + %d) = (%p, %c)\n", i, a_ptr + i, *(a_ptr + i));
    }

    return 0;
}