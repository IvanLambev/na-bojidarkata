#include <stdio.h>
#include "maths.h"

int main()
{
    int n = 5;
    unsigned long long fact = factorial(n);
    printf("%d! = %llu\n", n, fact);

    return 0;
}
