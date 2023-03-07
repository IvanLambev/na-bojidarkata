#include "transformation.h"
#include <stdio.h>

int main()
{
    transformation tmp = str_to_int("-123");
    printf("Input: -123 \n Output: tmp.result = %ld, tmp.error = \"%s\"\n", tmp.result, tmp.error);

    tmp = str_to_int("12ab23");
    printf("Input: 12ab23 \n Output: tmp.result = %ld, tmp.error = \"%s\"\n", tmp.result, tmp.error);

    tmp = str_to_int("12345");
    printf("Input: 12345 \n Output: tmp.result = %ld, tmp.error = \"%s\"\n", tmp.result, tmp.error);

    return 0;
}
