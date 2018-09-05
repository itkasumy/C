#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("before sys\n");

	system("./waibu");

	printf("after sys\n");

	return 0;
}
