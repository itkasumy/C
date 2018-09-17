/* ************************************************************************
 *       Filename:  18-循环的嵌套.c
 *    Description:  
 *        Version:  1.0
 *        Created:  09/17/2018 11:51:56 PM
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	/*
	int i = 0;
	int j = 0;
	int sum = 0;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			sum++;
			if (j == 5) {
				break;
			}
			printf("sum = %d\n", sum);
		}
	}

	printf("sum = %d\n", sum);
	*/

	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (j == 0) {
				break;
			}
			printf("j = %d\n", j);
		}
		printf("i = %d\n", i);
	}

	return 0;
}


