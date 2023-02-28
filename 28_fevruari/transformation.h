#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#define MAX_ERROR_LENGTH 100

typedef struct {
    long result;
    char error[MAX_ERROR_LENGTH];
} transformation;

transformation str_to_int(const char* str);

#endif /* TRANSFORMATION_H */
