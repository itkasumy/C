/* ************************************************************************
 *       Filename:  15-do-while的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  09/17/2018 11:39:18 PM
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	do {
		sum += i;
		i++;
	} while (i <= 100);

	printf("sum = %d\n", sum);

	return 0;
}


