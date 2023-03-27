#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s num1 num2\n", argv[0]);
        return 1;
    }

    int num1 = atoi(argv[1]); // atoi converts a string to an integer ASCII to integer
    int num2 = atoi(argv[2]);

    SafeResult result = safeadd(num1, num2);
    if (result.errorflag)
    {
        printf("Error: integer overflow\n");
        return 1;
    }

    printf("%d + %d = %d\n", num1, num2, result.value);

    return 0;
}
