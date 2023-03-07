#include <stdio.h>
#include <math.h>

#define ARRAY_SIZE 5

int main()
{
    long arr[ARRAY_SIZE] = {1, 2, 3, 4, 5};

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        arr[i] = pow(arr[i], 4);
    }

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%ld ", arr[i]);
    }

    printf("\n");

    return 0;
}
