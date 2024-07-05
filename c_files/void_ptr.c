/* Demoing the power of void pointers for multiple types. */

#include <stdio.h>
#include <stdlib.h>

struct animal {
    char *name;
    int legs;
};

int compar(const void *elem1, const void *elem2)
{
    // we need to convert the void pointers to animal ptrs
    const struct animal *animal1 = elem1;
    const struct animal *animal2 = elem2;

    // return >, <, or = depending how we want to sort
    if (animal1->legs > animal2->legs)
        return 1;

    if (animal1->legs < animal2->legs)
        return -1;

    return 0;
}

int main(void)
{
    // construct the array of animals to compare
    struct animal noahs_ark[4] =
        {
            {.name = "Donkey", .legs = 4},
            {.name = "Monkey", .legs = 2},
            {.name = "Antelope", .legs = 4},
            {.name = "Snake", .legs = 0}
        };

    // now we call qsort with the compare method we wrote above.
    // qsort needs the array, # of items, size of the items, and function.
    qsort(noahs_ark, 4, sizeof(struct animal), compar);

    // now print them out
    printf("# Legs\tSpecies\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d,\t%s\n", noahs_ark[i].legs, noahs_ark[i].name);
    }
}