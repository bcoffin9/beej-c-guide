/* Demoing malloc capability */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = malloc(sizeof(int));

    *p = 12;

    printf("I created some mem and here's what it has: %d\n", *(p));

    free(p);
    printf("Can we get to p again? %d\n", *(p)); // returns 0.. interesting

    char *ptr_to_string = malloc(3490);
}