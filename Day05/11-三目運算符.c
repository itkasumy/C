#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;
	int c;
	if (a > b) {
		c = a;
	} else {
		c = b;
	}
	printf("c = %d\n", c);

	a = 10;
	b = 20;
	c = a > b ? a : b;
	printf("c = %d\n", c);

	return 0;
}

