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
	int i = 0;
	int j = 0;
	int sum = 0;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			sum++;
		}
	}

	printf("sum = %d\n", sum);

	return 0;
}


