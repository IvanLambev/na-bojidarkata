// Make a macro function (SWAP(A, B, TYPE)) to swap the values ​​of two variables of any type. Help: enter the type as an additional argument to the macro function. Demonstrate using a similar macro. When defining the macro to make the code easier to read, you can put “/” to make the macro multiple lines.

#include <stdio.h>

#define SWAP(A, B, TYPE) \
    {                    \
        TYPE temp = A;   \
        A = B;           \
        B = temp;        \
    }
// naklonenite cherti sa za uvelichavane na makroto za da se pishe na edin red
int main(void)
{
    int a = 5;
    int b = 10;
    printf("Before swap: a = %d, b = %d ", a, b);
    SWAP(a, b, int);
    printf("After swap: a = %d, b = %d ", a, b);
    return 0;
}