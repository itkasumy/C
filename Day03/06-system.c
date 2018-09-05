#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("before sys\n");

	int a = system("./waibu");
	printf("a = %d\n", a);

	printf("after sys\n");

	return 0;
}
