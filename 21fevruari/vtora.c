//2. Make a macro called ARRAY_SIZE that contains the size of an array. Declare an array of size ARRAY_SIZE only if the ARRAY_SIZE macro is defined. The elements in the array must be consecutive powers of the pair: the first element is 1 (2^0), the second 2(2^1), the third 4(2^2), and so each subsequent element is the next power of the pair. The program should be made so that if the value of the macro changes, the array is filled automatically (the array should not be manually set). The program should print each element of the array on a new line. If the macro is not defined or the value of the ARRAY_SIZE macro is greater than 10 or less than 1, the program must contain a single statement that prints a message to the user that no array size supported by the application.


#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

int main() {
    #if defined(ARRAY_SIZE) && ARRAY_SIZE <= 10 && ARRAY_SIZE >= 1
        int arr[ARRAY_SIZE];
        int i;
        for (i = 0; i < ARRAY_SIZE; i++) {
            arr[i] = 1 << i;
        }
        for (i = 0; i < ARRAY_SIZE; i++) {
            printf("%d ", arr[i]);
        }
    #else
        printf("No array size supported by the application");
    #endif
    return 0;
}

