/* demoing pass by reference functionality */

#include <stdio.h>

void increment(int a) {
    a++;
    return;
}

int main(void) {
	int i = 10;

    increment(i);

    printf("Value of i after incremenet: %d\n", i);
}
