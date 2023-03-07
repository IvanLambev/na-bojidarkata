#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystrings.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error: Invalid number of arguments.\n");
        return 1;
    }
    char *str1 = malloc(51 * sizeof(char));
    char *str2 = argv[2];
    strcpy(str1, argv[1]);
    strconcat(str1, str2);
    printf("%s\n", str1);
    free(str1);
    return 0;
}
