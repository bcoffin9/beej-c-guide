/* Demo of string functionality. */

#include <stdio.h>

int main(void) {
    // char *s = "Demo successfully demoed!\n";
    // char s[14] = "Hello World!";
    // printf("%s\n", s);

    char s[] = "Printing it all out";
    int i = 0;
    int len = 19;
    for (i; i < len; i++) {
        printf("%c", s[i]);
    }
}