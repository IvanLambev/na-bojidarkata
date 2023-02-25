#include <stdio.h>
#include <stdlib.h>

#define DEBUG

void sort_and_sum(int arr[], int size)
{
    int i, j, temp, sum = 0;

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (i = 0; i < size; i++)
    {
        if (i % 3 == 0)
        {
            sum += arr[i];
        }
    }

#ifdef DEBUG
    printf("Sorted array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nElements at indexes divisible by 3: ");
    for (i = 0; i < size; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
#endif

    printf("Sum of elements at indexes divisible by 3: %d\n", sum);
}

int main()
{
    int arr[] = {7, 2, 4, 1, 6, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort_and_sum(arr, size);

    return 0;
}
