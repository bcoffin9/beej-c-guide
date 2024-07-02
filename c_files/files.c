/* Demo for file manipulation */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    // Variable to represent open file
    fp = fopen("hello.txt", "r"); // Open file for reading
    int c;

    // loop until we hit EOF
    while ((c = fgetc(fp)) != EOF)
        printf("%c", c); // Read a single character
    // Print char to stdout
    fclose(fp); // Close the file when done
}