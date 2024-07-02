/* demoing size of functionality */

#include <stdio.h>

int main(void) {
	long int i;
	float f;
	i = 2;
	f = 3.14;
	char *s = "Hello dere!";

	printf("Size of demo\n%zu, %zu, %zu\n", sizeof(i), sizeof(f), sizeof(s));
}
