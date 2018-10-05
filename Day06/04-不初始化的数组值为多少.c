/* ************************************************************************
 *       Filename:  04-不初始化的数组值为多少.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2018年09月23日 17时04分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main(int argc, char *argv[])
{
	int a[10];

	for (int i = 0; i < 10; i++) {
		printf("%d, ", a[i]);
	}

	printf("\n");

	return 0;
}


