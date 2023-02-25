#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H

#include "person.h"

struct SchoolClass
{
    struct Person students[26];
    char classChar;
    int classNumber;
    struct Person classTeacher;
};

#endif /* SCHOOLCLASS_H */
