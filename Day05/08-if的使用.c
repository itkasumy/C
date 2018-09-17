#include <stdio.h>

int main() {
	if (1) {
		printf("滿足條件\n");
	}


	if (4 > 3)
		printf("test 111111\n");
		printf("test 222222\n"); // 此語句不屬於 if

	if (3 > 4)
		printf("test 111111\n");
		printf("test 222222\n"); // 此語句不屬於 if

	if (0);
	{
		printf("test 333333\n");
	}

	int a = 3;
	if (a = 4) {
		printf("a 等於 4\n");
	}

	return 0;
}
