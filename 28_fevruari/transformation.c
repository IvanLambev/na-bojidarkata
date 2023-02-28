#include "transformation.h"
#include <stdlib.h>
#include <limits.h>
#include <errno.h>

transformation str_to_int(const char* str) {
    char* endptr;
    long result = strtol(str, &endptr, 10);

    if ((errno == ERANGE && (result == LONG_MAX || result == LONG_MIN))
            || (errno != 0 && result == 0)) {
        transformation res = {0, "Number out of range"};
        return res;
    }

    if (endptr == str) {
        transformation res = {0, "Invalid input string"};
        return res;
    }

    while (*endptr != '\0') {
        if (*endptr != ' ') {
            transformation res = {0, "Invalid input string"};
            return res;
        }
        endptr++;
    }

    transformation res = {result, "\0"};
    return res;
}
