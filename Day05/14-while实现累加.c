/* ************************************************************************
 *       Filename:  14-while实现累加.c
 *    Description:  
 *        Version:  1.0
 *        Created:  09/17/2018 11:20:24 PM
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

	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("sum = %d\n", sum);

	return 0;
}


