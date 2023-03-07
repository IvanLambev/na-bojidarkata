#include "transformation.h"
#include <ctype.h>

transformation str_to_int(const char *str)
{
    transformation res = {0, "\0"};
    char *endptr;
    long val = strtol(str, &endptr, 10);
    if (endptr == str || *endptr != '\0')
    {
        strcpy(res.error, "Invalid input string");
    }
    else
    {
        res.result = val;
    }
    return res;
}
