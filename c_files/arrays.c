/* Demoing arrays functionality. */

#include <stdio.h>

// passing pointer for array reference
void times2(int *a, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d\n", a[i] * 2);
    }
}

// array for array reference
void times3(int a[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d\n", a[i] * 3);
    }
}

// array with size, key for multi-dim arrays
void times4(int a[5], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d\n", a[i] * 4);
    }
}

int main(void) {
    float f[4];
    int i;

    f[0] = 0.405;
    f[1] = 0.365;
    f[2] = 0.272;
    f[3] = 0.304;

    printf("Printing out all elements of the array:\n");
    for (i = 0; i < 4; i++) {
        printf("element %d: %f\n", i, f[i]);
    }

    printf("Printing out arrays in loops\n");
    int alpha[] = {11, 22, 33, 44, 55};
    times2(alpha, 5);
    times3(alpha, 5);
    times4(alpha, 5);
}