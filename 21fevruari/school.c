//4. Make a header file "person.h" that declares a structure "Person" that contains information about the person's first name (array of 20 characters), his last name (array of 20 characters) his last name (array of 20 characters ) and what year he was born (integer). Make a header file “schoolclass.h” that inserts the header file “person.h” and declares a structure “SchoolClass” (class) to contain an array of 26 students (from the Person structure), the class class (character), class number (integer) and class teacher (Person field). Make a header file “schoolroom.h” in which you insert the header file “person.h” and in which declare a structure “SchoolRoom” that contains a room number (an integer) and information about which people are currently in that room (array of 50 elements of type Person). Make a file called school.c and in it insert the header files “schoolclass.h” and 'schoolroom.h” and make a structure “School” to contain school classes (an array of type SchoolClass of size 20) and school rooms (array of type SchoolRoom of size 10).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"
#include "schoolclass.h"
#include "schoolroom.h"


int main() {
    Person p1;
    strcpy(p1.firstName, "Purva");
    strcpy(p1.lastName, "Shah");
    p1.yearOfBirth = 2002;
    printf("First name: %s  Midle name: %s Last name: %s Year of birth: %d \n", p1.firstName, p1.midleName, p1.lastName, p1.yearOfBirth); // First name: Purva Last name: Shah Year of birth: 2002

    SchoolClass sc1;
    strcpy(sc1.students[0].firstName, "Purva");
    strcpy(sc1.students[0].lastName, "Shah");
    sc1.students[0].yearOfBirth = 2002;
    sc1.classLetter = 'A';
    sc1.classNumber = 1;
    strcpy(sc1.teacher.firstName, "Ivan");

    printf("First name: %s  Midle name: %s Last name: %s Year of birth: %d \n", sc1.students[0].firstName, sc1.students[0].midleName, sc1.students[0].lastName, sc1.students[0].yearOfBirth); // First name: Purva Last name: Shah Year of birth: 2002
    printf("Class letter: %c Class number: %d Teacher: %s \n", sc1.classLetter, sc1.classNumber, sc1.teacher.firstName); // Class letter: A Class number: 1 Teacher: Ivan

    SchoolRoom sr1;
    sr1.roomNumber = 1;
    strcpy(sr1.people[0].firstName, "Purva");
    strcpy(sr1.people[0].lastName, "Shah");
    sr1.people[0].yearOfBirth = 2002;
    printf("Room number: %d First name: %s  Midle name: %s Last name: %s Year of birth: %d \n", sr1.roomNumber, sr1.people[0].firstName, sr1.people[0].midleName, sr1.people[0].lastName, sr1.people[0].yearOfBirth); // Room number: 1 First name: Purva Last name: Shah Year of birth: 2002

    School s1;
    s1.classes[0] = sc1;
    s1.rooms[0] = sr1;
    printf("Class letter: %c Class number: %d Teacher: %s \n", s1.classes[0].classLetter, s1.classes[0].classNumber, s1.classes[0].teacher.firstName); // Class letter: A Class number: 1 Teacher: Ivan
    printf("Room number: %d First name: %s  Midle name: %s Last name: %s Year of birth: %d \n", s1.rooms[0].roomNumber, s1.rooms[0].people[0].firstName, s1.rooms[0].people[0].midleName, s1.rooms[0].people[0].lastName, s1.rooms[0].people[0].yearOfBirth); // Room number: 1 First name: Purva Last name: Shah Year of birth: 2002

    return 0;
}
