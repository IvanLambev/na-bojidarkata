// Make a function-like macro that uses the ternary comparison operator to find the larger of 2 elements.

#include <stdio.h>

#define MAX(a, b) (a > b ? a : b)

int main(void)
{
    int a = 5;
    int b = 10;
    printf("The larger of %d and %d is %d ", a, b, MAX(a, b));

    return 0;
}