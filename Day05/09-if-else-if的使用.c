#include <stdio.h>

int main() {
	int a = 3;
	if (a == 3) {
		printf("a 和 3 相等\n");
	} else {
		printf("a 和 3 不相等\n");
	}

	a = 4;
	if (a == 3) {
		printf("a 和 3 相等\n");
	} else if (a > 3) {
		printf("a 大於 3\n");
	} else {
		printf("a 小於 3\n");
	}

	return 0;
}
