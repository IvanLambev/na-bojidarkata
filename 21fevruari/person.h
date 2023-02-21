//4. Make a header file "person.h" that declares a structure "Person" that contains information about the person's first name (array of 20 characters), his last name (array of 20 characters) his last name (array of 20 characters ) and what year he was born (integer).


// Make a header file “schoolclass.h” that inserts the header file “person.h” and declares a structure “SchoolClass” (class) to contain an array of 26 students (from the Person structure), the class class (character), class number (integer) and class teacher (Person field).

struct person {
    char first_name[20];
    char last_name[20];
    char middle_name[20];
    int year_of_birth;

};



