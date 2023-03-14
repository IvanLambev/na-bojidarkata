#include <string.h>
#include "mystrings.h"

int strlength(const char *str) {
    return strlen(str);
}

void strconcat(const char *str1, const char *str2, char *result) {
    strcpy(result, str1);
    strcat(result, str2);
}

int strcompare(const char *str1, const char *str2) {
    return strcmp(str1, str2);
}
