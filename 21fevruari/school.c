// 4. Make a header file "person.h" that declares a structure "Person" that contains information about the person's first name (array of 20 characters), his last name (array of 20 characters) his last name (array of 20 characters ) and what year he was born (integer). Make a header file “schoolclass.h” that inserts the header file “person.h” and declares a structure “SchoolClass” (class) to contain an array of 26 students (from the Person structure), the class class (character), class number (integer) and class teacher (Person field). Make a header file “schoolroom.h” in which you insert the header file “person.h” and in which declare a structure “SchoolRoom” that contains a room number (an integer) and information about which people are currently in that room (array of 50 elements of type Person). Make a file called school.c and in it insert the header files “schoolclass.h” and 'schoolroom.h” and make a structure “School” to contain school classes (an array of type SchoolClass of size 20) and school rooms (array of type SchoolRoom of size 10).

#include "schoolclass.h"
#include "schoolroom.h"

#define NUM_CLASSES 20
#define NUM_ROOMS 10

struct School
{
    struct SchoolClass classes[NUM_CLASSES];
    struct SchoolRoom rooms[NUM_ROOMS];
};

int main(void)
{
    // Create a School struct
    struct School school;

    // Use the school struct
    school.classes[0].students[0].birthYear = 2005;
    school.rooms[0].peopleInRoom[0].birthYear = 1980;

    return 0;
}
