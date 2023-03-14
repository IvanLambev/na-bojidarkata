#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystrings.h"

#define MAX_STRING_SIZE 50

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <string1> <string2>\n", argv[0]);
        return 1;
    }

    if (strlen(argv[1]) + strlen(argv[2]) > MAX_STRING_SIZE) {
        fprintf(stderr, "Error: Maximum size of the character strings passed as arguments must not exceed %d\n", MAX_STRING_SIZE);
        return 1;
    }

    char result[MAX_STRING_SIZE + 1];
    strconcat(argv[1], argv[2], result);

    printf("str1=%s, str2=%s, result=%s\n", argv[1], argv[2], result);

    return 0;
}
