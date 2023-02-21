//3. Make a function that uses a different sorting algorithm depending on the operating system it's on. If the operating system is windows, use the bubble method. If the system is linux to use direct selection method. If the operating system is MacOS, use the direct insertion method. If the operating system is none of the three, the function to reverse the array (its first element, become last, second penultimate, etc.)

#include <stdio.h>
#include <stdlib.h>

#if defined(_WIN32) || defined(_WIN64)
    #define OS "Windows" // Windows OS 
#elif defined(__linux__) || defined(__linux)
    #define OS "Linux" // Linux OS
#elif defined(__APPLE__) || defined(__MACH__)
    #define OS "MacOS" // MacOS

#endif
//sorts the array depending on the OS
//if the OS is Windows, uses bubble sort - O(n^2) complexity - https://www.geeksforgeeks.org/bubble-sort/
//if the OS is Linux, uses selection sort - O(n^2) complexity 
//Algorithm:
// Initialize minimum value(min_idx) to location 0.
// Traverse the array to find the minimum element in the array.
// While traversing if any element smaller than min_idx is found then swap both the values.
// Then, increment min_idx to point to the next element.
// Repeat until the array is sorted.


//- https://www.geeksforgeeks.org/selection-sort/
//if the OS is MacOS, uses insertion sort - O(n^2) complexity - https://www.geeksforgeeks.org/insertion-sort/
//Algorithm:
// Insertion sort iterates, consuming one input element each repetition, and growing a sorted output list.
// At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list, and inserts it there.
// It repeats until no input elements remain.


void sort(int *arr, int n) {
    int i, j, temp;
    if (strcmp(OS, "Windows") == 0) {
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    } else if (strcmp(OS, "Linux") == 0) {
        int min, min_index;
        for (i = 0; i < n; i++) {
            min = arr[i];
            min_index = i;
            for (j = i + 1; j < n; j++) {
                if (arr[j] < min) {
                    min = arr[j];
                    min_index = j;
                }
            }
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    } else if (strcmp(OS, "MacOS") == 0) {
        int j, key;
        for (i = 1; i < n; i++) {
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    
    }
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
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
