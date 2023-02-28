
#include "maths.h" 
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d \n", n, factorial(n));
    return 0;

}



//5. Make a maths.h file in which a function is declared to find the factorial of a given number. Make a maths.c file that implements the function. Make a main.c program to insert the header file and demonstrate the operation of the function. Make maths.c a static library and link the library when compiling main.c. Save the library creation and program compilation commands in a separate file and attach it to the job.