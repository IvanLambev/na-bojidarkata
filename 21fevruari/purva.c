//
//1. Define a macro called DEBUG. Make a function that sorts an array and finds the sum of the elements that are at indices that are divisible by 3. Make the function so that if the DEBUG macro is defined, it prints the sorted array and the elements that are located at indices that are divisible by 3.

#include <stdio.h>
#include <stdlib.h>

#define DEBUG 0 // 1 for debug mode, 0 for normal mode

void sort(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int sum(int *arr, int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        if (i % 3 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int *) malloc(n * sizeof(int));
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    #ifdef DEBUG
        printf("Sorted array: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf(" Sum of elements at indices divisible by 3: %d", sum(arr, n));
    #else
        printf("Sum of elements at indices divisible by 31: %d", sum(arr, n));


    #endif
    return 0;
}