// Make a file called school.c and in it insert the header files “schoolclass.h” and 'schoolroom.h” and make a structure “School” to contain school classes (an array of type SchoolClass of size 20) and school rooms (array of type SchoolRoom of size 10).
//

struct school {
    struct schoolclass classes[20];
    struct schoolroom rooms[10];
};


