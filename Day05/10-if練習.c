#include <stdio.h>

int main() {
	int num;
	printf("請輸入num:");
	scanf("%d", &num);

	if (0 < num && num < 10) {
		printf("個位\n");
	} else if (num > 9 && num < 100) {
		printf("十位\n");
	} else if (num > 99 && num < 1000) {
		printf("百位\n");
	} else if (num > 999 && num < 10000) {
		printf("千位\n");
	} else {
		printf("其他\n");
	}

	return 0;	
}

