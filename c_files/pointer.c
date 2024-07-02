/* demoing pointer functionality */

#include <stdio.h>

void increment(int *p) {
    *p = *p + 1;
    return;
}

int main(void) {
    int i = 42;
    int *pointer_to_i = &i;

    printf("The value that i holds is %d", i);
    printf(" and its address is %p\n", pointer_to_i);
    printf("\nWe will now show the value of i using the indirection operator on p:\n%d\n", *pointer_to_i);

    printf("And now for a demo on passing a pointer as a reference.");
    int j = 12;
    printf("\nWe'll start with j at: %d\n", j);
    int *ptr_to_j = &j;
    increment(ptr_to_j);
    printf("Now the value of j is: %d\n", j);
}