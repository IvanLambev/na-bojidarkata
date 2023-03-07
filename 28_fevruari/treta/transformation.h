#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include <stdlib.h>
#include <string.h>

typedef struct transformation
{
    long result;
    char error[100];
} transformation;

transformation str_to_int(const char *str);

#endif
