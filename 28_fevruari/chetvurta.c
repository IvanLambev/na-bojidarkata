#include <stdio.h>
#include <math.h>

#define SIZE 10 

int main() {
    long arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    
    for (i = 0; i < SIZE; i++) {
        arr[i] = pow(arr[i], 4);
    }
    
    printf("Array after raising each element to the fourth power:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%ld ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
// how to run:

// gcc -o chetvurta chetvurta.c -lm

// ./treta