/* ************************************************************************
 *       Filename:  16-for的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  09/17/2018 11:42:17 PM
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;
	for (i = 1; i <= 100; i++) {
		sum += i;
	}
	printf("sum = %d\n", sum);

	return 0;
}


