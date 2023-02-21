//Make a header file “schoolclass.h” that inserts the header file “person.h” and declares a structure “SchoolClass” (class) to contain an array of 26 students (from the Person structure), the class class (character), class number (integer) and class teacher (Person field). Make a header file “schoolroom.h” in which you insert the header file “person.h” and in which declare a structure “SchoolRoom” that contains a room number (an integer) and information about which people are currently in that room (array of 50 elements of type Person).

//
//  schoolclass.h
//  school

#ifndef schoolclass_h
#define schoolclass_h

#include <stdio.h>
#include "person.h"

struct schoolclass {
    struct person students[26];
    char class_letter;
    int class_number;
    struct person teacher;
};

#endif /* schoolclass_h */
