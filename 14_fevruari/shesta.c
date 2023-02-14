// Make a macro function that sorts an array of any type, and can sort descending or ascending depending on an argument passed to the macro. Example definition of a similar macro function SORT(ARRAY, SIZE, TYPE, COMPARE). An example of using a similar macro function: SORT(array, 5, int, >). It is a good idea to reuse the SWAP macro function from Exercise 5. When you define the macro to make the code easier to read, you can put “/” to make the macro multiple lines.

#include <stdio.h>

#define SWAP(A, B, TYPE) \
    {                    \
        TYPE temp = A;   \
        A = B;           \
        B = temp;        \
    }

#define SORT(ARRAY, SIZE, TYPE, COMPARE)            \
    {                                               \
        for (int i = 0; i < SIZE; i++)              \
        {                                           \
            for (int j = i + 1; j < SIZE; j++)      \
            {                                       \
                if (ARRAY[i] COMPARE ARRAY[j])      \
                {                                   \
                    SWAP(ARRAY[i], ARRAY[j], TYPE); \
                }                                   \
            }                                       \
        }                                           \
    }

int main(void)
{

    int array[5] = {5, 10, 1, 3, 2};
    SORT(array, 5, int, >);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    printf(" end\n");
    return 0;
}