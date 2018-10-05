/* ************************************************************************
 *       Filename:  01-数组元素的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月23日 16时46分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int a[10];

	int i = 0;
	for (i = 0; i < 10; i++) {
		a[i] = i + 1;
	}

	for (i = 0; i < 10; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}


	return 0;
}


