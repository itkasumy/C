/* ************************************************************************
 *       Filename:  06-求三数最值.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年10月05日 14时12分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

/* 
int main(int argc, char *argv[])
{
	int a = 10;
	int b = 20;
	int c = 30;
	int max = a;

	if (b > max) {
		max = b;
	}

	if (c > max) {
		max = c;
	}

	printf("max = %d\n", max);

	return 0;
}
*/
 
int main(int argc, char *argv[])
{
	int a = 10;
	int b = 20;
	int c = 30;
	int max;

	// max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
	max = a > b ? a > c ? a : c : b > c ? b : c;
	printf("max = %d \n", max);

	return 0;
}

/*
int main(int argc, char *argv[])
{
	int a = 10;
	int b = 20;
	int c = 30;
	
	int max;

	if (a > b) {
		max = a;
	} else {
		max = b;
	}

	if (max > c) {
		printf("最大值为: %d\n", max);
	} else {
		printf("最大值为: %d\n", c);
	}

	return 0;
}
*/


