/* Demo how to write to a file */

#include <stdio.h>

int main(void) {
    FILE *fp;
    int x = 32;

    // fp = fopen("newfile.txt", "w");
    fp = stdout; //writes to console

    fputc('B', fp);
    fputc('\n', fp);
    fprintf(fp, "Hello hello %d\n", x);
    fputs("Hey there!\n", fp);

    fclose(fp);
}