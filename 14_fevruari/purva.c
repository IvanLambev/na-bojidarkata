// Make an object-like macro that makes it easy to define an array of 5 elements, and that can be used to print the elements of the array

#include <stdio.h>

#define ARRAY_SIZE 5

#define ARRAY_INIT(array) int array[ARRAY_SIZE] = {0, 1, 2, 3, 4}

int main(void)
{
    ARRAY_INIT(array);
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf(" end\n");
}