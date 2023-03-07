#include <stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error: Invalid number of arguments.\n");
        return 1;
    }
    printf("%d\n", strcompare(argv[1], argv[2]));
    return 0;
}
