/* Demo for file manipulation */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    // Variable to represent open file
    fp = fopen("hello.txt", "r"); // Open file for reading
    int c = fgetc(fp);
    printf("%c\n", c); // Read a single character
    // Print char to stdout
    fclose(fp); // Close the file when done
}