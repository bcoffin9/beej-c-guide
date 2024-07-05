/* Demo ptr math */

#include <stdio.h>

int my_str_length(char *s) {
    char *p = s;

    while(*p != '\0') {
        p++;
    }

    // Return the difference in pointers
    return p - s;
}

int main(void) {
    // create arr
    int nums[5] = {1, 20, 300, 4000, 50000};
    int *ptr_nums = &nums[0];

    printf("Array element 1: %d\n", *(ptr_nums + 0));
    printf("Array element 2: %d\n", *(ptr_nums + 1));
    printf("Array element 3: %d\n", *(ptr_nums + 2));
    printf("Using a sentinel value in while loop\n");

    int sentinel_val[10] = {1, 2, 3, 4, 50, 60, 70, 80, 90, 999};
    int *p = &sentinel_val[0];

    while (*p != 999) {
        printf("%d\n", *p);
        p++;
    }

    printf("My string is: %d characters long", my_str_length("Count it up!"));
}